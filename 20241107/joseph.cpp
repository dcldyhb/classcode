#include <iostream>
#include <vector> 

using namespace std;

int function(int n , int m)
{
    vector<int> rank;
    for (int i = 0 ; i < n ; i++)
    {
        rank.push_back(i+1);
    }

    int index = 0 ;
    while (rank.size() > 1)
    {
        index = (index + m -1 ) % rank.size();
        rank.erase(rank.begin() + index);
    }
    return rank[0] ;
}

int main()
{
    int n , m ;
    cin >> n >> m ;
    cout << function(n , m) << endl ;
    return 0 ;
}
