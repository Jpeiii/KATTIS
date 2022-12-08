#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    string s;
    getline(cin, s);
    for (int i : s)
    {
        sum += i;
    }

    cout << char(sum / s.length());
}

/*
why use getline instead of cin
The cin function can be used to read input from the standard input, but it has some limitations.
It is designed to read input values separated by white space (spaces, tabs, newlines, etc.),
and it stops reading when it encounters a white space character.
This means that it cannot read input strings that contain spaces or other special characters.
For example, if you try to read the input string "hello world" using cin, it will only read the first word "hello",
and the rest of the input string "world" will be ignored.
This is why the code uses the getline function instead, which can read an entire line of input,
including spaces and other special characters.
*/