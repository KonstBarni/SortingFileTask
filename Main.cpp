#include <iostream>
#include "FileRead.h"

int main()
{

    std::vector<Person> vecPers = getVec();
    
    //sortByLastName(vecPers);
    //sortByIndex(vecPers);

    for(auto ps : vecPers)
    {
        std::cout << ps << std::endl;
    }
    return 0;
}