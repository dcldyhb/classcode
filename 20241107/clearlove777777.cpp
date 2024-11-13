#include <iostream>

using namespace std;

int sum7s(int n)
{
    int ans = 0; 
    int k = n / 7 ;
    for (int i = 1 ; i <= k ; i++ )
    {
        ans += 7*i ;
    }
    return(ans);
}

int main()
{
    int n ;
    cin >> n;
    cout << sum7s(n) ;
}