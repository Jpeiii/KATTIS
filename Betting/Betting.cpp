#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x;
    cin >> x;
    cout << setprecision(10) << fixed;
    cout << 100 / x << endl;
    cout << 100 / (100 - x) << endl;
}
