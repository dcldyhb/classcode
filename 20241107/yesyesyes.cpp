#include<iostream>

using namespace std;

int islower(char n)
{
    if (n >= 'a' && n <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isupper(char n)
{
    if (n >= 'A' && n <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isdigit(char n)
{
    if (n >= '0' && n <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string password;
    cin >> password;
    int num = password.length();
    if (num < 6)
    {
        cout << "不合格";
    }
    else
    {
        int sum1 = 0 , sum2 = 0 , sum3 = 0;
        for (int i = 0 ; i <num ; i++)
        {
            sum1 += islower(password[i]);
            sum2 += isupper(password[i]);
            sum3 += isdigit(password[i]);
        }
        if (sum1 * sum2 * sum3 == 0)
        {
            cout << "不合格" << endl;
            return 0;
        }
        else
        {
            cout << "合格" << endl;
            return 0;
        }
    }
    
}