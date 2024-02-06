#include "FileRead.h"
#include <iostream>
#include <algorithm>

using namespace std;


vector<Person> getVec()
{
    vector<Person> vec;
    fstream f_read;
    f_read.open(PATH_FILE, fstream::in | fstream::out);

    if(!f_read)
        cout<<"File not exist!" << endl;

    f_read.seekg(0, ios_base::beg);

    while(true)
    {
        if(f_read.eof())
            break;
        Person pers;
        f_read >> pers;
        pers.popBack();
        vec.push_back(pers);	
    }
	f_read.close();

    return vec;
}


bool compareFirstName(Person& pers1, Person& pers2)
{
    return pers1.getFistName() < pers2.getFistName();
}

bool compareLastName(Person& pers1, Person& pers2)
{
    return pers1.getLastName() < pers2.getLastName();
}

bool compareIndex(Person& pers1, Person& pers2)
{
    return pers1.getIndex() < pers2.getIndex();
}

void sortByFirstName(vector<Person>& vecPers)
{
    sort(begin(vecPers), end(vecPers), compareFirstName);
}

void sortByLastName(vector<Person>& vecPers)
{
    sort(begin(vecPers), end(vecPers), compareLastName);
}

void sortByIndex(vector<Person>& vecPers)
{
    sort(begin(vecPers), end(vecPers), compareIndex);
}
