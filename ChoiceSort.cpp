#include <vector>
#include "ChoiceSort.h"
#include "Sorter.h"
#include "Persons.h"

using namespace std;

vector<Person> getVector()
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

void choiceSorting()
{
    vector<Person> vectPersons = getVector();
    Sorter doSort(vectPersons);

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
                doSort.sortByFirstName();
                for(auto pers : doSort.vectorPersons)
                {
                    cout << pers.getFistName()<< " ";
                    cout << pers.getLastName() << ": ";
                    cout << pers.getPhone() << endl;
                }
                break;

            case 2:
                doSort.sortByLastName();
                for(auto pers :doSort.vectorPersons)
                {
                    cout << pers.getLastName() << " ";
                    cout << pers.getFistName() << ": ";
                    cout << pers.getPhone() << endl;
                }
                break;

            case 3:
                doSort.sortPhoneNumber();
                for(auto pers : doSort.vectorPersons)
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