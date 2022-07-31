#include "One.h"


	McDonalds::McDonalds()
	{
		price1 = 15;
		price2 = 5;
		price3 = 10;
		price4 = 7;
	}
	int McDonalds::getMPrice1()
	{
		return price1;
	}
	int McDonalds::getMPrice2()
	{
		return price2;
	}
	int McDonalds::getMPrice3()
	{
		return price3;
	}
	int McDonalds::getMPrice4()
	{
		return price4;
	}
	void McDonalds :: MList()
	{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t         McDonald's               " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     1. Hamburger        15$       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     2. CheeseBurger     5$        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     3. BigMac           10$       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     4. McChicken        7$        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     8. Select Restaurant          " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     9. Customer Support           " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}