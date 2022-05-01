#ifndef PR_EITH
#define PR_EITH
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	string name;
	double age;
	int course;
	double average_rating;
	double weight;
	double height;
public:
	

	friend istream& operator >> (istream& in, Student& other);
	friend ostream& operator << (ostream& out, Student &other);//перегрузка оператора вывода.
	void operator = (const Student &other);//перегрузка оператора присваивания.
};
#endif
