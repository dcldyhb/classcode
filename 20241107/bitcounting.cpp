#include<iostream> 

using namespace std;

int ones(int n)
{
    int temp = n ;
    int count = 0 ;
    while (temp > 0)
    {
        if (temp % 2 == 1)
        {
            count ++ ;
        }
        temp = temp / 2 ;
    }
    if (temp == 1)
    {
        count++ ;
        return count ;
    }
    return count ;
    if (temp == 0)
    {
        return count ;
    }
}

int main()
{
    int n ;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        cout << ones(i) << " " ;
    }
    cout << ones(n) << endl ;
    return 0 ;
}