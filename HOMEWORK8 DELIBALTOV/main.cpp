#include "Header.h"

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Введите описание 1 студенат: имя, возраст, курс обучения, средняя оценка, вес, рост (через enter)" << endl;
	Student first;
	cin >> first;
	cout << '\n';
	cout << first<<endl;//реализация прегрузки оператора ввода.
	cout << "-----------------------------------------------" << endl;

	cout<<'\n';

	cout << "Введите описание 2 студенат: имя, возраст, курс обучения, средняя оценка, вес, рост (через enter)" << endl;
	Student second;
	cin >> second;
	cout << '\n';
	cout << second << endl;


	second = first;
	cout << "-----------------------------------------------" << endl;
	cout << '\n';
	cout << "(После присваивания)" << endl << second << endl;

	return 0;
}