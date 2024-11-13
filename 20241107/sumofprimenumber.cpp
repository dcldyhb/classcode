#include<iostream>
#include<cmath> // 引入cmath库，用于计算平方根

using namespace std;

bool isprimenumber(int n)
{
    if (n < 2) return false; // 小于2的数不是素数
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for (int i = max(n, 2); i <= m; i++) // 从2开始，因为2是最小的素数
    {
        if (isprimenumber(i))
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}