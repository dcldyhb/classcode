#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int m , n ;
    cin >> m >> n ;
    int a;
    vector<vector<int>> matrix(m , vector<int>(n));
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            cin >> a;
            if (a == 0)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n - 1 ; j++)
        {
            cout << matrix[i][n-j-1] << " ";
        }
        cout << matrix[i][0] << endl;
    }
}