#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int m , n ;
    cin >> m >> n ;
    
    vector<int> matrix;
    
    for (int i = 0 ; i < m ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            int temp;
            cin >> temp;
            matrix.push_back(temp);
        }
    }
    for (int i = 0 ; i < n ; i++ )
    {
        for (int j = 0 ; j < m -1 ; j++)
        {
            cout << matrix[i*m + j] << " ";
        }
        cout << matrix[i* m + m-1 ] << " " << endl;
    }
}