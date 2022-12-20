#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int v1 = b - a;
    int v2 = c - b;
    if (v1 / abs(v1) != v2 / abs(v2))
    {
        cout << "turned" << '\n';
    }
    else if (abs(v2) > abs(v1))
    {
        cout << "accelerated" << '\n';
    }
    else if (abs(v2) < abs(v1))
    {
        cout << "braked" << '\n';
    }
    else
    {
        cout << "cruised" << '\n';
    }
    return 0;
}