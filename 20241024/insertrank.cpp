#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0 ;
    cin >> n ;
    vector<int> rank;
    int num = 0 ;
    if (n == 1)
    {
        cin >> num ;
        cout << num ;
    }
    if (n == 2 )
    {
        int num1 , num2 ;
        if (num1 < num2)
        {
            cout << num1 << " " << num2 ;
        }
        else
        {
            cout << num2 << " " << num1 ;
        }
    }
    else 
    {
        int n1 , n2 ;
        cin >> n1 >> n2;
        if (n1 < n2 )
        {
            rank.push_back(n1);
            rank.push_back(n2);
        }
        else
        {
            rank.push_back(n2);
            rank.push_back(n1);
        }
        for (int i = 2 ; i < n ; i++ )
        {
            cin >> num ;
            int j = 1 ;
            while(j < rank.size())
            {
                if (num <= rank[j] && num >= rank[j-1])
                {
                    rank.insert(rank.begin()+j,num);
                }
                j++;
            }
            if (num > rank[rank.size()-1])
            {
                rank.push_back(num);
            }
            else if (num < rank[0])
            {
                rank.insert(rank.begin(),num);
            }
        }
        for (int i = 0 ; i < n-1 ; i++)
        {
            cout << rank[i] << " ";
        }
        cout << rank[n-1];
    }

}