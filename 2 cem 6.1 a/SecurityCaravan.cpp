#include "a6_1.h"
#include "SecurityCaravan.h"
#include"iostream"
using namespace std;
//� ���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� � ������ ��������
//� ���������� ����������

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
SecurityCaravan::SecurityCaravan() :a6_1()// ����������� ��� ����������
{
	countSecurity = 1;
}
SecurityCaravan::SecurityCaravan(int coins, int idLocation, int countSecurity) : a6_1(coins, idLocation), countSecurity(countSecurity)   // ��������� ����������
{
	this->countSecurity = countSecurity;
}
SecurityCaravan::SecurityCaravan(const SecurityCaravan& change) :a6_1(change) // �����������
{
	this->countSecurity = change.countSecurity;
}
SecurityCaravan::SecurityCaravan(SecurityCaravan&& change) :a6_1(change) // ����������� 
{
	this->countSecurity = change.countSecurity;
	change.countSecurity = 0;
}
void SecurityCaravan::fill()  // ���������� � ����������
{
	a6_1::fill();
	cout << "count of security: ";
	cin >> this->countSecurity;
	
}
void SecurityCaravan::print() const  // ����� �� ����� 
{
	cout << "������� �� ������ �������� " << endl;
	a6_1::print();
	cout << "cout of security: " << this->countSecurity << endl;
}
