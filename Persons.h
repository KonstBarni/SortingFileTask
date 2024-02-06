#pragma once
#include <fstream>
#include <string>

using namespace std;

class Person
{
	string first_name;
	string last_name;
	int index;

public:
	Person();
	Person(const string& f_name, const string& s_name, int idx)
		: first_name(f_name), last_name(s_name), index(idx) {}

	const string& getFistName() const { return first_name; }				
	const string& getLastName() const { return last_name; }
	const int getIndex() const { return index; }
    const string& popBack(); 

	void setFirtName(const string& f_name) { first_name = f_name; }
	void setLastName(const string& s_name) { last_name = s_name; }
    void setIndec(const int idx) { index = idx; }

    bool operator < (Person& obj)const;

	friend std::istream& operator >>(std::istream& is, Person& obj);
	friend std::ostream& operator <<(std::ostream& os, const Person& obj);

};
