#include <iostream>
using namespace std;
int C(int m, int n)
{
    if (n == 0 || m == n)
    {
        return 1;
    }
    else if (m < n)
    {
        return 0;
    }
    else
    {
        return C(m-1, n) + C(m-1, n-1);
    }
}
int main() 
{
    int m, n;
    cin >> m >> n;
    cout << C(m, n) << endl;
    return 0;
}