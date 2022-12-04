#include <iostream>
#include <fstream>
#include <list>
#include "person.h"

int main()
{
    std::list<Person> people;
    std::fstream addressBook("F://VisualStudio//C++//Adressbuch//AddressBook.csv");
    addressBook << "moin";
    addressBook.close();
    Person p1("", "", "", "", "", "");
    
    std::cout << p1.setForname("moin");
}