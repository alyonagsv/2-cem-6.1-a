#pragma once
#include "a6_1.h"
//� ���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� � ������ ��������
//� ���������� ����������
class SecurityCaravan : public a6_1
{
	int countSecurity; //���������� ����������
public:

	void SetCountSecurity(int cs);
	int GetCountSecurity();

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	SecurityCaravan(); // ����������� ��� ����������
	SecurityCaravan(int coins, int idLocation, int countSecurity);  // ��������� ����������
	SecurityCaravan(const SecurityCaravan& change);  // �����������
	SecurityCaravan(SecurityCaravan&& change);   // ����������� 
	virtual ~SecurityCaravan() override {};

	void fill() override;  // ���������� � ����������
	void print() const override;  // ����� �� ����� 
};