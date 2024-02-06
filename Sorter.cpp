#include "Sorter.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Sorter::sortByFirstName()
{
    sort(begin(this->vectorPersons), end(this->vectorPersons), compareFirstName);
}

void Sorter::sortByLastName()
{
    sort(begin(this->vectorPersons), end(this->vectorPersons), compareLastName);
}

void Sorter::sortPhoneNumber()
{
    sort(begin(this->vectorPersons), end(this->vectorPersons), comparePhoneNumber);
}

bool compareFirstName(Person& pers1, Person& pers2)
{
    return pers1.getFistName() < pers2.getFistName();
}

bool compareLastName(Person& pers1, Person& pers2)
{
    return pers1.getLastName() < pers2.getLastName();
}

bool comparePhoneNumber(Person& pers1, Person& pers2)
{
    return pers1.getPhone() < pers2.getPhone();
}
