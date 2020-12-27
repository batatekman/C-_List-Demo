#include <iostream>
#include <vector>

using namespace std;

class List
{
private:
protected:
public:
    List() {}            //Constructor
    ~List() {}           //Destructor
    vector<string> list; //Vector to hold List of items in Program
    string name;         //Global variable for name as in parameter for the program

    void printMenu();  //Print Menu of Program
    void printList();  //Print List of Items
    void addItem();    //Add Items to Program
    void deleteItem(); //Delete Items from Program
};