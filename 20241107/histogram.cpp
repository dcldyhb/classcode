#include<iostream>

using namespace std;

void PrintDiagram(int n)
{
    cout << "|" << endl;
    for (int i = 1 ; i <= 3 ; i++)
    {
        cout << "|";
        for (int j = 1 ; j <= n ; j++)
        {
            cout << "*";
        }
        cout << endl ;
    }
    cout << "|" << endl ;
}

int main()
{
    int n1 , n2 , n3;
    cin >> n1 >> n2 >> n3 ;
    PrintDiagram(n1);
    PrintDiagram(n2);
    PrintDiagram(n3);
}