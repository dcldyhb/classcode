#include <iostream>

using namespace std;

int main()
{
    char str[101];
    int num = 0, space = 0 , letter = 0 , other = 0 ;
    cin.getline(str, 101,'\n');
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            num++;
        }
        else if(str[i] == ' ')
        {
            space++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            letter++;
        }
        else
        {
            other++;
        }
    }
    cout << "数字：" << num << endl;
    cout << "空格：" << space << endl;
    cout << "字母：" << letter << endl;
    cout << "其他字符：" << other << endl;

    return 0;
}
