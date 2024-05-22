#include "a6_1.h"
#include "RouteCaravan.h"
#include"iostream"
using namespace std;

void RouteCaravan::SetIDLocation(int id)
{
	a6_1::SetIDLocation(id);
}
void RouteCaravan::SetCoins(int c)
{
	a6_1::SetCoins(c);
}
void RouteCaravan::GetIDLocation()
{
	a6_1::GetIDLocation();
}
void RouteCaravan::GetCoins()
{
	a6_1::GetCoins();
}

void RouteCaravan::SetIDLocationEnd(int ide)
{
	idLocationEnd = ide;
}
int RouteCaravan::GetIDLocationEnd()
{
	return idLocationEnd;
}
void RouteCaravan::SetTime(int t)
{
	time = t;
}
int RouteCaravan::GetTime()
{
	return time;
}

RouteCaravan::RouteCaravan() :a6_1() // ����������� ��� ����������
{
	time = 1;
	idLocationEnd = 1;
}
RouteCaravan::RouteCaravan(int coins, int idLocation, int idLocationEnd, int time) :a6_1(coins, idLocation), idLocationEnd(idLocationEnd), time(time) // ��������� ����������
{
	this->time = time;
	this->idLocationEnd = idLocationEnd;
	if (idLocationEnd > 10000 || idLocationEnd < 1)
	{
		cout << "incorrect data " << endl;
		cout << "enter id location of end " << endl;
		cin >> idLocationEnd;
	}
	this->idLocationEnd = idLocationEnd;
}
RouteCaravan::RouteCaravan(const RouteCaravan& change)noexcept :a6_1(change) // �����������
{
	this->idLocationEnd = change.idLocationEnd;
	this->time = change.time;
}
RouteCaravan::RouteCaravan(RouteCaravan&& change) :a6_1(change) // ����������� 
{
	this->idLocationEnd = change.idLocationEnd;
	this->time = change.time;
	change.time = 0;
	change.idLocationEnd = 0;
}
void RouteCaravan::fill() // ���������� � ����������
{
	cout << "the time (sec) (stamp before which the caravan should arrive at its destination) : ";
	cin >> this->time;

	cout << "id end of location: ";
	cin >> this->idLocationEnd;
	cout << "id start of location ";
	a6_1::fill();
}
void RouteCaravan::print() const   // ����� �� ����� 
{
	cout << "������� �� ������� �������� " << endl;
	cout << "id start of location ";
	a6_1::print();
	cout << "id end of location: " << this->idLocationEnd << endl;
	cout << "the time (sec) stamp before which the caravan should arrive at its destination: " << this->time << endl;
}
//� ���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� � ������ ��������
//� ������������� ������� � ����� ��������
//� ������� �������, �� ������� ������� ������ ������� � ����� ����������
