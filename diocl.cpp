#include <iostream>
#include "dioclHeader.h"
const double PI = 3.14159265;


	Diokl::Diokl(double vvod_R)
	{
		a = vvod_R;
	}
	double Diokl::Check()
	{
		double prov=a;
		if (a < 0)
		{
			setlocale(LC_ALL, "Russian");
			std::cout << "ВВедите положительное a" << std::endl;
		}
		else
		{
			return 0;
		}
	}
	double Diokl::Set_nachaloY(double vvod_x) const  //3 задание
	{
		double p = pow(vvod_x, 3) / (2 * a - 3);
		return sqrt(p);
	}
	double Diokl::Koeff() const
	{
		return  2 * a;
	}

	double Diokl::Rasstoyanie( int vvod_U) const //4 задание
	{

		return  2 * a * pow(sin(vvod_U), 2) / cos(vvod_U);
	}

	double Diokl::S() const
	{

		return  3 * PI * pow(a, 2);
	}
	double Diokl::V() const
	{

		return  2 * PI * PI * a * a * a;
	}
	double Diokl::Svyaz(double vvod_P) const
	{

		return  -pow(vvod_P,2)/(vvod_P/2- vvod_P);
	}

