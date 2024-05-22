#include "a6_1.h"
#include "SecurityCaravan.h"
#include"iostream"
using namespace std;
//• количество золотых монет, получаемых за выполнение задания
//• идентификатор локаций – начала маршрута
//• количество охранников

void SecurityCaravan::SetCountSecurity(int cs)
{
	countSecurity = cs;
}
int SecurityCaravan::GetCountSecurity()
{
	return countSecurity;
}
void SecurityCaravan::SetIDLocation(int id)
{
	a6_1::SetIDLocation(id);
}
void SecurityCaravan::SetCoins(int c)
{
	a6_1::SetCoins(c);
}
void SecurityCaravan::GetIDLocation()
{
	a6_1::GetIDLocation();
}
void SecurityCaravan::GetCoins()
{
	a6_1::GetCoins();
}
SecurityCaravan::SecurityCaravan() :a6_1()// конструктор без параметров
{
	countSecurity = 1;
}
SecurityCaravan::SecurityCaravan(int coins, int idLocation, int countSecurity) : a6_1(coins, idLocation), countSecurity(countSecurity)   // заданными значениями
{
	this->countSecurity = countSecurity;
}
SecurityCaravan::SecurityCaravan(const SecurityCaravan& change) :a6_1(change) // копирования
{
	this->countSecurity = change.countSecurity;
}
SecurityCaravan::SecurityCaravan(SecurityCaravan&& change) :a6_1(change) // перемещения 
{
	this->countSecurity = change.countSecurity;
	change.countSecurity = 0;
}
void SecurityCaravan::fill()  // заполнения с клавиатуры
{
	a6_1::fill();
	cout << "count of security: ";
	cin >> this->countSecurity;
	
}
void SecurityCaravan::print() const  // вывод на экран 
{
	cout << "Задание на охрану каравана " << endl;
	a6_1::print();
	cout << "cout of security: " << this->countSecurity << endl;
}
