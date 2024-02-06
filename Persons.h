#pragma once
#include <fstream>
#include <string>

using namespace std;

class Person
{
	string first_name;
	string last_name;
	int phone_number;

public:
	Person();
	Person(const string& f_name, const string& s_name, int idx)
		: first_name(f_name), last_name(s_name), phone_number(idx) {}

	//getters
	const string& getFistName() const { return first_name; }				
	const string& getLastName() const { return last_name; }
	const int getPhone() const { return phone_number; }
    const string& popBack(); 

	//setters
	void setFirtName(const string& f_name) { first_name = f_name; }
	void setLastName(const string& s_name) { last_name = s_name; }
    void setPhone(const int number) { phone_number = number; }

    bool operator < (Person& obj)const;		//operator of compire

	// operators  of input/output
	friend std::istream& operator >>(std::istream& is, Person& obj);
	friend std::ostream& operator <<(std::ostream& os, const Person& obj);

};
