#pragma once
class a6_1
{
protected:
	int coins; // ���������� ������� �����, ���������� �� ���������� �������
	int idLocation; //������������� �������
public:

	void SetIDLocation(int id);
	void SetCoins(int c);
	int GetIDLocation();
	int GetCoins();

	a6_1(); // ����������� ��� ����������
	a6_1(int coins, int idLocation);  // ��������� ����������
	a6_1(const a6_1& change)noexcept;  // �����������
	a6_1(a6_1&& change);   // ����������� 
	virtual ~a6_1() {};

	virtual void fill();  // ���������� � ����������
	virtual void print() const;  // ����� �� ����� 
};
