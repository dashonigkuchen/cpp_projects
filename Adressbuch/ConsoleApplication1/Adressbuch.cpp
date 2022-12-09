#include <iostream>
#include <fstream>
#include <vector>
#include "person.h"

int main()
{
    std::vector<Person> people;
    std::fstream addressBook("F://VisualStudio//C++//Adressbuch//AddressBook.csv", std::ios::in);
    for (int i = 0; !addressBook.eof(); i++)
    {
        std::string line;
        addressBook >> line;
        if (line.length() == 0) continue;
        std::string entries[6];
        int pvs_space = 0;
        try
        {
            for (int j = 0; j < 6; j++)
            {
                int new_space = line.find(';', pvs_space);
                entries[j] = line.substr(pvs_space, (new_space - pvs_space));
                pvs_space = new_space;
            }
            people.push_back(Person(entries[0], entries[1], entries[2], entries[3], entries[4], entries[5]));
        }
        catch (const std::out_of_range)
        {
            std::cout << "line " << i + 1 << " corrupted" << std::endl;
        }
    }
    addressBook.close();
    
    std::cout << people[1].getForename();
}