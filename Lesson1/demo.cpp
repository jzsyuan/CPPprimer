#include<iostream>
#include <string>
#include <stdio.h>

int main()
{
using namespace std;

    string myString("There is no spoon.");
    cout << "Come up and C++ me some time." << endl;
    printf("Follow this command: %s", myString.c_str()); //note the use of c_str
    cin.get();

    return 0;
}