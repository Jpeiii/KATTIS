#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        sum += int(s[i]);
    }
    cout << char((sum / s.size()));
}
