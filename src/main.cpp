#include <iostream>
#include <vector>
using namespace std;
#include "include/list.h"

/*----------------------------------------------------------------------------*/
/*- Simple List Item Program for adding, display and deleting items on a list-*/
/*----------------------------------------------------------------------------*/

/*
Main Program
*/
int main(int arg_count, char *args[])
{

    string param(args[1]);

    //cout << "Hello Again Second Project Started.." << endl;

    if (arg_count > 1)
    {
        List list;
        list.name = param;
        list.printMenu();
        //cout << "You have an arguement" << endl;
        //cout << "The number of parameters are " << arg_count - 1 << endl;
        //cout << "The parameter is " << param << endl;
    }
    else
    {
        cout << "Please enter a parameter" << endl; //Parameter must be enter message
    }

    return 0;
}
