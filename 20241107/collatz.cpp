#include <iostream>

using namespace std;

int function(int n )
{
    int count = 0 , temp = n;
    while (temp != 1)
    {
        if (temp %2 == 0)
        {
            temp /= 2;
            count ++;
        }
        else 
        {
            temp = 3 * temp + 1;
            count ++;
        }
    }
    if (n == 1 )
    {
        count = 1;
    }
    return count ;
}

int main()
{
    int ans = 1;
    int n ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++)
    {
        if (function(i) > function(ans))
        {
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}