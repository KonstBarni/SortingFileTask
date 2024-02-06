#pragma once
#include <fstream>
#include <vector>
#include "Persons.h"

#define PATH_FILE  "Persons.txt"

vector<Person> getVec();

bool compareFirstName(Person& pers1, Person& pers2);
bool compareLastName(Person& pers1, Person& pers2);
bool compareIndex(Person& pers1, Person& pers2);

void sortByFirstName(vector<Person>& vecPers);
void sortByLastName(vector<Person>& vecPers);
void sortByIndex(vector<Person>& vecPers);
