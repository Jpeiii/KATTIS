#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

bool twoCharacter(const string &a, const string &b)
{

    return a.substr(0, 2) < b.substr(0, 2);
}

int main()
{

    while (true)
    {
        int studentName;
        cin >> studentName;
        if (studentName == 0)
        {
            break;
        }

        vector<string> names;
        for (int i = 0; i < studentName; i++)
        {
            string name;
            cin >> name;
            names.push_back(name);
        }
        stable_sort(names.begin(), names.end(), twoCharacter);

        for (auto it = names.begin(); it != names.end(); it++)
        {
            cout << *it << "\n";
        }
        cout << "\n";
    }
    return 0;
}