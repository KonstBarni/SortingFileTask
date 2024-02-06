#include "Persons.h"

Person::Person()
{
	first_name = ""; last_name = ""; index = 0;
}

const string& Person::popBack()
{
    last_name.pop_back();
    return last_name;
}

bool Person::operator < (Person& obj) const
{
    if(this->index != obj.index)
        return this->index < obj.index;

    if(this->first_name != obj.first_name)
        return this->first_name < obj.first_name;
    
    return this->last_name < obj.last_name;
}

std::istream& operator >>(std::istream& is, Person& obj)
{
	is >> obj.first_name;
	is >> obj.last_name;
	is >> obj.index;
	return is;
}

std::ostream& operator <<(std::ostream& os, const Person& obj)
{
	os << obj.first_name;
	os << ' ';
	os << obj.last_name;
	os << ' ';
	os << obj.index;
	return os;
}