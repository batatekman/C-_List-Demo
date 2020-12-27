#include <iostream>
#include <vector>
using namespace std;

#include "include/list.h"

/*
Print Menu
*/
void List::printMenu()
{

    int select;

    cout << "\n\n\nThis is your menu: " << List::name << endl;

    cout << "***********************************" << endl;
    cout << "*** 1. Print List               ***" << endl;
    cout << "*** 2. Add Parts to List        ***" << endl;
    cout << "*** 3. Delete Parts from List   ***" << endl;
    cout << "*** 4. Quit                     ***" << endl;
    cout << "*** Select your option & return ***" << endl;
    cout << "***********************************" << endl;

    cin >> select; //Choice entered

    if (select == 1)
    {
        //cout << "Print List selected." << endl;
        printList(); //Print List method called
    }
    else if (select == 2)
    {
        //cout << "Add Parts to List selected." << endl;
        addItem(); //Add Item method called
    }
    else if (select == 3)
    {
        //cout << "Delete Parts from List." << endl;
        deleteItem(); //Delete Item method called
    }
    else if (select == 4)
    {
        cout << "Exiting.." << endl;
        exit(0);
    }
    else
    {
        cout << "Non selected Error" << endl;
    }
}

/*
Print List Method
*/
void List::printList()
{
    cout << "Listed Printed function" << endl;
    if (list.size())
    {
        cout << "\n\n\n\n\n\n\n";
        cout << "**********************" << endl;
        cout << "* Items on the list  *" << endl;
        for (long unsigned int i = 0; i < list.size(); i++)
        {
            cout << "Item is " << list[i] << endl;
        }

        char option;
        cout << "\nR - Return to Menu" << endl;
        cin >> option;

        if (option == 'R' || option == 'r') //if 'R' or 'r' selected than print Menu method called
        {
            printMenu(); //Call printMenu method
        }
        else
        {
            cout << "Error, please try again\n\n"; //Error message if 'R' or 'r' is not selected
        }
    }
    else
    {
        cout << "\n\n\nNothing in the list.\n\n\n" //Nothing in the list
             << endl;
        printMenu(); //call printMenu method
    }
}

/*
Add Item to the List
*/
void List::addItem()
{
    cout << "\n\n\n\n\n\n\n";
    cout << "****************************" << endl;
    cout << "* Type an item             *" << endl;
    cout << "****************************" << endl;

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Items Added Succesfully" << endl;
    cin.clear();

    printMenu(); //print Menu called methods
}

/*
Delete Item Method
*/
void List::deleteItem()
{
    cout << "\n\n\n\n\n\n\n";
    cout << "****************************" << endl;
    cout << "* Deleting an Item         *" << endl;
    cout << "* lowest will be deleted   *" << endl;
    cout << "****************************\n\n\n\n\n"
         << endl;

    if (list.size())
    {
        for (long unsigned int i = 0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << endl;
        }

        int delSelect;
        cout << "Select number to delete item: " << endl;
        cin >> delSelect;
        list.erase(list.begin() + delSelect);

        cout << "\n\n\n\n\n****************************" << endl;
        cout << "*Current items on the list *"
             << endl;
        for (long unsigned int i = 0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << endl;
        }

        cout << "\n\n"
             << endl;
    }
    else
    {
        cout << "No items to delete.";
    }

    printMenu(); //printMenu method called
}