#include "iostream"
#include <math.h>
#include "dioclHeader.h"

using namespace std;
const double PI = 3.14159265;
int main()
{
	double ix, radius, assimpt;
	int ygol, zadaniye;
	setlocale(LC_ALL, "Russian");
	cout << "������� ��������� �������� " << endl;
	cout << "������� �������� R" << endl;
	cin >> radius;
	Diokl resheniye(radius);
	resheniye.Check();
		cout << "������� �������� �" << endl;
		cin >> ix;
		cout << "������� �������� ����" << endl;
		cin >> ygol;
		cout << "������� �������� ����.����� ���������������" << endl;
		cin >> assimpt;
		cout << "������� ����� �������" << endl;
		cin >> zadaniye;
		while (zadaniye != 0) {
			switch (zadaniye)
			{
			case 3:

				cout << "���������" << resheniye.Set_nachaloY(ix) << endl;
				break;
			case 4:
				cout << "���������" << resheniye.Rasstoyanie(ygol) << endl;
				break;
			case 5:
				cout << "���������" << resheniye.Koeff() << endl;
				break;
			case 6:
				cout << "���������" << resheniye.S() << endl;
				break;
			case 7:
				cout << "���������" << resheniye.V() << endl;
				break;
			case 8:
				cout << "���������" << resheniye.Svyaz(ix) << endl;
				break;

			}
			cin >> zadaniye;
		}
		return 0;
	}