#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int left = 0 , right = n-1 , top = 0 , bottom = n-1 ;
    vector<vector<int>> matrix(n, vector<int>(n));
    int num = 1 , x = 0 , y = 0 ;  
    while (num <= n * n ) //生成矩阵
    {
        for (int i = left ; i <= right ; i++) //输入顶行
        {
            matrix[top][i] = num;
            num++;
        }
        top++;

        for (int i = top ; i <= bottom ; i++)//输入右列
        {
            matrix[i][right] = num;
            num++;
        }
        right--;

        for (int i = right ; i >= left ; i--)//输入底行
        {
            matrix[bottom][i] = num;
            num++;
        }
        bottom--;

        for (int i = bottom ; i >= top ; i--)//输入左列
        {
            matrix[i][left] = num;
            num++;
        }
        left++;
    }

    /*输出矩阵*/
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}