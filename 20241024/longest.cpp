#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> rank;
    vector<int> count(128 , 0);

    char temp;
    while (cin >> temp)
    {
        rank.push_back(temp);
    }

    int left = 0 , right = 0 ;
    int maxlength = 0;

    while (right < rank.size())
    {
        char temp = rank[right];
        count[temp]++;

        while (count[temp] > 1)
        {
            count[rank[left]]--;
            left++;
        }
        
        maxlength = max(maxlength , right - left+1);
        right++;
    }

    cout << maxlength;

    return 0;
}