#pragma once

#include <vector>
#include "Persons.h"

struct Sorter
{
    std::vector<Person> vectorPersons;

    Sorter();
    Sorter(std::vector<Person>& vecPers) : vectorPersons(vecPers) {};

    void sortByFirstName();           //sorting by first_name
    void sortByLastName();            //sorting by last_name
    void sortPhoneNumber();           //sorting by phone_number
};

bool compareFirstName(Person& pers1, Person& pers2);          //flag sotring by first_name
bool compareLastName(Person& pers1, Person& pers2);           //flag sotring by last_name
bool comparePhoneNumber(Person& pers1, Person& pers2);        //flag sotring by phone_number

