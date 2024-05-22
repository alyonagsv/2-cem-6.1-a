#pragma once
#include "a6_1.h"
//���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� ������������ ��������
// 
//� ������������� ������� ������������ ���������
//� ������������� ������������� ��������
class DeliveryItem :public a6_1
{
	int item; // ������������� ������������� ��������
	int idLocationCustomer; //������������� ������� ���������
	//idLocation ������������� ������� ������������ ��������
public:

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	int GetItem();
	int GetIDLocationCustomer();
	void SetItem(int i);
	void SetIDLocationCustomer(int id);

	DeliveryItem(); // ����������� ��� ����������
	DeliveryItem(int coins, int idLocation, int item, int idLocationCustomer);  // ��������� ����������
	DeliveryItem(const DeliveryItem& change)noexcept;  // �����������
	DeliveryItem(DeliveryItem&& change);   // ����������� 
	~DeliveryItem() override {};

	void fill() override;  // ���������� � ����������
	void print() const override;  // ����� �� ����� 
};
