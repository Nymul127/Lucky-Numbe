#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int count = 0;
    cin >> n;
    string str;
    str = to_string(n);// Convert long integer to String so that we will be access each integer digit of given Input.

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '4' || str[i] =='7')
        {
            count++;
        }
    }
    if (count==4||count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
