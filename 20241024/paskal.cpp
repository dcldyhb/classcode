#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int numRows = 0 ;
    cin >> numRows;
    vector<int> line_n1 = {1};
    vector<int> line_n2 = {1};
    if (numRows == 1 )
    {
        cout << 1 << endl ;
    }
    else
    {
        cout << 1 << endl;
        for (int i =1 ; i < numRows ; i++ )
        {
            line_n1 = line_n2;
            line_n2.clear();
            line_n2.push_back(1);
            for (int j = 0 ; j < line_n1.size()-1 ; j++)
            {
                line_n2.push_back(line_n1[j] + line_n1[j+1]);
            }
            line_n2.push_back(1);
            for (int i = 0 ; i < line_n2.size() ; i++)
            {
                cout << line_n2[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}