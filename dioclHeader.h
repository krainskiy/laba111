#pragma once
#ifndef _DIOCLHEADER_
#define _DIOCLHEADER_
class Diokl {
private:
	//double x;
	double a;
	//int O;
public: 
	Diokl( double vvod_R=1);
	double Set_nachaloY(double vvod_x) const ;
	double Check();
	double Koeff() const;
	double Rasstoyanie( int vvod_U) const;
	double S() const;
	double V() const;
	double Svyaz(double vvod_R) const;
};
#endif