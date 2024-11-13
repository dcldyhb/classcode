#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> rank;
    int n ;
    cin >> n ; 
    int num ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> num ; 
        rank.push_back(num);
    } 
    for (int  j = 1 ; j < n ; j++)
    {
       int temp = int (rank[j]);
       for (int k = j-1 ; k >= 0 ; k--)
       {
            if (temp < rank[k])
            {
                rank[k+1] = rank[k];
                if (k == 0)
                {
                    rank[k] = temp;
                }
            }
            else
            {
                rank[k+1] = temp;
                break;
            }
       }
    }
    for (int i = 0 ; i < n-1 ; i++)
    {
        cout << rank[i] <<" ";
    }
    cout << rank[n-1];
}