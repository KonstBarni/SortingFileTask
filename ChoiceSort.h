#pragma once
#include <iostream>
#include <fstream>
#include "Sorter.h"

#define PATH_FILE  "Persons.txt"

vector<Person> getVec();      // get a vector of persons from a file
void choiceSorting();       // choosing a sort