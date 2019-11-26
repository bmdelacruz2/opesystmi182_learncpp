#include<ncurses.h>
#include<stdio.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int nNumberofArgs, char* pszArgs[])
{
    // enter operand1 and operand2
    int  number;
    cout << "Please nter a number that is less than or equal to 100: ";
    cin  >> number;
    // now print the results
    if (number <= 100)
    {
        cout << "This statement will appear on screen as number<=100\n"
             << endl;
    }
    if (number > 100)
    {
        cout << "This statement will not appear on screen as logical expression is false\n"
             << endl;
    }

    return 0;
}
