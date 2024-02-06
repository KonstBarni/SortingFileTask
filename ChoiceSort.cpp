#include <vector>
#include <iomanip>
#include "ChoiceSort.h"
#include "SortingFlags.h"
#include "Persons.h"

using namespace std;

void choiceSorting()
{
    vector<Person> vectPersons = getVec();

    while(true)
    {
        int choice{0};
        cout << "Выберите вид сортировки: 1 - по имени; 2 - по фамилии; 3 - по номеру телефона. Для выхода нажмите: 9" << endl; 
        cin >> choice;

        if(choice == 9)
            break;

        if(!cin){
            cin.clear();
            cin.ignore(80, '\n');
        }

        switch(choice)
        {
            case 1:
                sortByFirstName(vectPersons);
                for(auto pers : vectPersons)
                {
                    cout << pers.getFistName() << " ";
                    cout << pers.getLastName() << ": ";
                    cout << pers.getPhone() << endl;
                }
                break;

            case 2:
                sortByLastName(vectPersons);
                for(auto pers : vectPersons)
                {
                    cout << pers.getLastName() << " ";
                    cout << pers.getFistName() << ": ";
                    cout << pers.getPhone() << endl;
                }
                break;

            case 3:
                sortByIndex(vectPersons);
                for(auto pers : vectPersons)
                {
                    cout << pers.getPhone() << ": ";
                    cout << pers.getFistName() << " ";
                    cout << pers.getLastName() << endl;
                }
                break;

            default:
                cout << "Неверный ввод! Попробуйтк еще раз." << endl;
                cin.clear();
                break;
        }
    }
}