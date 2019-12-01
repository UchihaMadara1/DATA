#define _CRT_SECURE_NO_WARNINGS

#include<time.h>
#include "Datetime.h"
#include <iostream>
using namespace std;

void main()
{
	Date t;
	Date t1 = t;
}
//class Int
//{
//	friend ostream& operator<<(ostream &out,Int const &t);
//public:
//	Int(int i = 0) : m_i(i)
//	{}
//	~Int()
//	{}
//public:
//	Int operator+(const Int &t);
//	Int operator-(const Int &t);
//	Int operator*(const Int &t);
//	Int operator/(const Int &t);
//	Int operator%(const Int &t);
//public:
//	Int&operator+=(const Int &t);
//	Int&operator-=(const Int &t);
//	Int&operator*=(const Int &t);
//	Int&operator/=(const Int &t);
//	Int&operator%=(const Int &t);
//private:
//	int m_i;
//};
//ostream& operator<<(ostream &out, Int const &t)
//{
//	out << t.m_i;
//	return out;
//}
//Int Int ::operator+(const Int &t)
//{
//	Int temp(m_i + t.m_i);
//	return temp;
//}
//
//Int Int ::operator-(const Int &t)
//
//{
//	Int temp(m_i - t.m_i);
//	return temp;
//}
//Int Int ::operator*(const Int &t)
//
//{
//	Int temp(m_i * t.m_i);
//	return temp;
//}
//
//Int Int ::operator/(const Int &t)
//{
//	Int temp(m_i / t.m_i);
//	return temp;
//}
//Int Int ::operator%(const Int &t)
//{
//	Int temp(m_i % t.m_i);
//	return temp;
//}
//Int& Int:: operator+=(const Int &t)
//{
//	m_i = m_i + t.m_i;
//	return *this;
//}
//Int& Int:: operator-=(const Int &t)
//{
//	m_i = m_i - t.m_i;
//	return *this;
//}
//Int& Int:: operator*=(const Int &t)
//{
//	m_i = m_i * t.m_i;
//	return *this;
//}
//Int& Int:: operator/=(const Int &t)
//{
//	m_i = m_i / t.m_i;
//	return *this;
//}
//Int& Int:: operator%=(const Int &t)
//{
//	m_i %= t.m_i;
//	return *this;
//}
//void main()
//{
//	Int t(10);
//	Int t1(2);
//	Int t3 = t1 + t;
//	cout<<t3<< endl;
//}