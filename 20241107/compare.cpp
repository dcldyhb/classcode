#include<iostream>

using namespace std;

bool compare(char chr1[] , char chr2[])
{
    int i = 0 ;
    while(chr1[i] != '\0' && chr2[i] != '\0')
    {
        bool flag = true ;
        if (chr1[i] < chr2[i])
        {
            flag = false;
        }
        i++;
        return flag ;
    }
    if (chr1[i] == '\0' && chr2[i] != '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char chr1[501], chr2[501];
    cin.getline(chr1 , 501);
    cin.getline(chr2 , 501);
    if (compare(chr1 , chr2))
    {
        cout << chr1;
    }
    else
    {
        cout << chr2;
    }
}