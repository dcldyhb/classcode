#include<iostream>

using namespace std;

void MinMaxValue(int arr[] , int n ,int &max ,int &min)
{
    if (n == 1)
    {
        max = min = arr[0];
    }
    else
    {
        int max_temp , min_temp;
        MinMaxValue(arr , n-1 , max_temp , min_temp);
        if (max_temp > arr[n-1])
        {
            max = max_temp;
        }
        else
        {
            max = arr[n-1];
        }
        if (min_temp < arr[n-1])
        {
            min = min_temp;
        }
        else
        {
            min = arr[n-1];
        }
    }
}

int main()
{
    int n ;
    cin >> n ;
    int max , min ;
    int arr[10];

    for (int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    MinMaxValue(arr , 10 , max , min);
    cout << max << " " << min << endl ;
    return 0 ;
}
