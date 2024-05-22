#pragma once
#include "a6_1.h"
#include "DeliveryItem.h"
#include"iostream"
using namespace std;
//���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� ������������ ��������
// 
//� ������������� ������� ������������ ���������
//� ������������� ������������� ��������

void DeliveryItem::SetIDLocation(int id)
{
	a6_1::SetIDLocation(id);
}
void DeliveryItem::SetCoins(int c)
{
	a6_1::SetCoins(c);
}
void DeliveryItem::GetIDLocation()
{
	a6_1::GetIDLocation();

}
void DeliveryItem::GetCoins()
{
	a6_1::GetCoins();
}

int DeliveryItem::GetItem()
{
	return item;
}
int DeliveryItem::GetIDLocationCustomer()
{
	return idLocationCustomer;
}
void DeliveryItem::SetItem(int i)
{
	item = i;
}
void DeliveryItem::SetIDLocationCustomer(int id)
{
	idLocationCustomer = id;
}

DeliveryItem::DeliveryItem() :a6_1()// ����������� ��� ����������
{
	item = 1;
	idLocationCustomer = 1;
}
DeliveryItem::DeliveryItem(int coins, int idLocation, int item, int idLocationCustomer) : idLocationCustomer(idLocationCustomer), item(item), a6_1(coins, idLocation) // ��������� ����������
{
	this->item = item;
	this->idLocationCustomer = idLocationCustomer;
	if (item > 10000 || item < 1)
	{
		cout << "incorrect data " << endl;
		cout << "enter item " << endl;
		cin >> item;
	}
	this->item = item;
}
DeliveryItem::DeliveryItem(const DeliveryItem& change)noexcept :a6_1(change)// �����������
{
	a6_1::a6_1(change);
	this->item = change.item;
	this->idLocationCustomer = change.idLocationCustomer;
}
DeliveryItem::DeliveryItem(DeliveryItem&& change) :a6_1(change)  // ����������� 
{
	a6_1::a6_1(change);
	this->item = change.item;
	this->idLocationCustomer = change.idLocationCustomer;

	change.item = 0;
	change.idLocationCustomer = 0;
}

void DeliveryItem::fill()   // ���������� � ����������
{
	a6_1::fill();
	cout << "enter item: ";
	cin >> this->item;

	cout << "enter id Location of Customer: ";
	cin >> this->idLocationCustomer;
}
void DeliveryItem::print() const  // ����� �� ����� 
{
	cout << " ����� �� �������� ��������" << endl;
	a6_1::print();
	cout << "item: " << this->item << endl;
	cout << "id Location of Customer: " << this->idLocationCustomer << endl;
}

