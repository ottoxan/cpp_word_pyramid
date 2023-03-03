#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string input;

    cout << "Enter string = ";
    cin >> input;

    for (int i = input.length(); i <= input.length(); --i)
    {
        for (int j = 1; j <= 1; ++j)
        {   
            cout << input;
        }

        input.erase(0,1);
        cout << endl;
    }
    _getch();
}