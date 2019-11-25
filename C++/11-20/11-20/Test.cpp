#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

//void main()
//{
//	cout <<"Hello bit."<< endl;
//	int a = 10;
//	char ch = 'A';
//	double d = 12.34;
//	cout << a << endl;
//	cout << ch << endl;
//	cout << d << endl;
//}
//内联函数只是一种建议
//inline fun

//cout<<typeid(ar).name()<<endl;
//auto //编译器根据右边数据类型推测数据类型。
//class  私有  struct 公有   （默认）
class CGoods
{
public:
	void RegisterGoods(char *name,int count,float price);
	void SetName(char *name);
	void SetCount(int count);
	void SetPrice(float price);
public:
	char *GetName();
	int GetCount();
	float GetPrice();
	float GetTotalPrice();
private:
	char _name[10];
	int _count;
	float _price;
	float _total_price;
};
//测试
void CGoods::RegisterGoods(char *name, int count, float price)
{
	strcpy(_name, name);
	_count = count;
	_price = price;
}
void CGoods::SetName(char *name)
{
	strcpy(_name, name);
}
void CGoods::SetCount(int count)
{
	_count = count;
}
void CGoods::SetPrice(float price)
{
	_price = price;
}
char * CGoods::GetName()
{
	return _name;
}
int CGoods::GetCount()
{
	return _count;
}
float CGoods::GetPrice()
{
	return _price;
}
float CGoods::GetTotalPrice()
{
	return _count * _price;
}
int main()
{
	CGoods s1, s2;
	s1.RegisterGoods("sb", 10, 12);
	cout << "s1.name = "<<s1.GetName()<<endl;
	cout << "s1.count = " << s1.GetCount() << endl;
	cout << "s1.price = " << s1.GetPrice() << endl;
	cout << "s1.totalprice = " << s1.GetTotalPrice() << endl;
	return 0;
}