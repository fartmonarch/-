#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Circle
{
private:
	double m_radius;
public:
	double Getarea();
	Circle()
	{
		m_radius = 1;
		cout << "�������޲ι��캯��" << endl;
	}
	Circle(double radius)
	{
		m_radius = radius;
		cout << "�������вι��캯��" << endl;
	}
	Circle(const Circle& C)
	{
		m_radius = C.m_radius;
		cout << "�����˿������캯��" << endl;
	}
	~Circle()
	{
		cout << "��������������" << endl;
	}
	
};

double Circle::Getarea()
{
	return 3.14 * m_radius * m_radius;
}

int main()
{
	Circle c1;
	cout << "c1�����:" << c1.Getarea() << endl;

	Circle c2(4);
	cout << "c2�����:" << c2.Getarea() << endl;

	Circle c3 = c2;
	cout << "c3�����:" << c3.Getarea() << endl;
	return 0;
}