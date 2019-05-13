// baitap1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
class Phanso
{
private:
	int tuso;
	int mauso;
public:
	//contructors
	Phanso() :tuso(0), mauso(1)
	{}
	Phanso(int tu) :tuso(tu), mauso(1)
	{}
	Phanso(int tu, int mau) :tuso(tu), mauso(mau)
	{}
	//setters
	void setTuso(int tu)
	{
		this->tuso = tu;
	}
	void setMauso(int mau)
	{
		this->mauso = mau;
	}
	//getters
	int geTuso() const
	{
		return this->tuso;
	}
	int getMauso() const
	{
		return this->mauso;
	}
	//methods
	Phanso operator +(const Phanso &a) const
	{
		Phanso kq;
		kq.tuso = this->tuso*a.mauso + this->mauso*a.tuso;
		kq.mauso = this->mauso*a.mauso;
		return kq;
	}
	void operator += (const Phanso &a)
	{
		this->tuso = this->tuso*a.mauso + mauso * a.tuso;
		this->mauso = this->mauso*a.mauso;
	}
	bool operator ==(const Phanso &a)
	{
		return this->tuso*a.mauso == mauso * a.tuso;

	}
	Phanso operator ++ (int)
	{
		cout << "A++" << endl;
		Phanso a(this->tuso, this->mauso);
		this->tuso = this->tuso + this->mauso;
		return a;
	}
	void Display()
	{
		cout << tuso << "/" << mauso;
	}
	void Toigian()
	{
		int x = tuso;
		int y = mauso;
		int ucln;
		if (x == 0)
		{
			ucln = 0;
		}
		else
		{
			while (x != y)
			{
				if (x > y)
				{
					x -= y;
				}
				else
					y -= x;
			}
			ucln = x;
			
		}
		tuso = tuso / ucln;
		mauso = mauso / ucln;
	}

};