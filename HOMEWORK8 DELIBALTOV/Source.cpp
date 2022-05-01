#include "Header.h"

istream &operator >> (istream &in, Student &other) {
	in >> other.name >> other.age >> other.course >> other.average_rating >> other.weight >> other.height;
	return in;
}

ostream &operator << (ostream &out, Student &other) {
	out << "Данные студента " << other.name << endl << "Возраст: " << other.age << endl << "Курс: " << other.course << endl << "Среднняя оценка: " << other.average_rating << endl<< "Вес: " << other.weight <<endl<< "Рост: " << other.height;
	return out;
}

void Student :: operator = (const Student &other) {
	this->name = other.name;
	this->age = other.age;
	this->course = other.course;
	this->average_rating = other.average_rating;
	this->weight = other.weight;
	this->height = other.height;
}