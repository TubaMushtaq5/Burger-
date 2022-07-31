#include "One.h"

	KFC::KFC()
	{
		price1 = 5;
		price2 = 10;
		price3 = 15;
	}
	int KFC::getKPrice1()
	{
		return price1;
	}
	int KFC::getKPrice2()
	{
		return price2;
	}
	int KFC::getKPrice3()
	{
		return price3;
	}
	void KFC:: KList()
	{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t         KFC                      " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     1. Small bucket     5$        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     2. Medium bucket    10$       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     3. Large  bucket    15$       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     8. Select Restaurant          " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     9. Customer Support           " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}