#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Date
{
public:
	void Date::ShowDate();
	void Date::SetDate(int year, int month, int day);
private:
	int _year;
	int _month;
	int _day;
};

void Date::ShowDate()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
void Date::SetDate(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
void main()
{
	Date s1, s2;
	s1.SetDate(2019,11,25);
	s2.SetDate(2019,11,15);
	s1.ShowDate();
	s2.ShowDate();
}
//class A
//{
//public:
//	void Print_A()
//	{
//		cout << data_a << endl;
//	}
//	void Show()
//	{
//		cout << "Show()"<< endl;
//	}
//private:
//	int data_a;
//};
//void main()
//{
//	A *ptr = NULL;
//	ptr->Print_A();
//	ptr->Show();
//}