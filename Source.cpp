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
	cout << "ВВедите начальные значения " << endl;
	cout << "ВВедите значение R" << endl;
	cin >> radius;
	Diokl resheniye(radius);
	resheniye.Check();
		cout << "ВВедите значение Х" << endl;
		cin >> ix;
		cout << "ВВедите значение угол" << endl;
		cin >> ygol;
		cout << "Введите значение геом.места перпендикуляров" << endl;
		cin >> assimpt;
		cout << "ВВедите номер задания" << endl;
		cin >> zadaniye;
		while (zadaniye != 0) {
			switch (zadaniye)
			{
			case 3:

				cout << "Результат" << resheniye.Set_nachaloY(ix) << endl;
				break;
			case 4:
				cout << "Результат" << resheniye.Rasstoyanie(ygol) << endl;
				break;
			case 5:
				cout << "Результат" << resheniye.Koeff() << endl;
				break;
			case 6:
				cout << "Результат" << resheniye.S() << endl;
				break;
			case 7:
				cout << "Результат" << resheniye.V() << endl;
				break;
			case 8:
				cout << "Результат" << resheniye.Svyaz(ix) << endl;
				break;

			}
			cin >> zadaniye;
		}
		return 0;
	}