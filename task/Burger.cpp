#include "One.h"

BurgerKing::BurgerKing()
	{
		price1 = 5;
		price2 = 10;
		price3 = 15;
	}
int BurgerKing::getBPrice1()
{
	return price1;
}
int BurgerKing::getBPrice2()
{
	return price2;
}
int BurgerKing::getBPrice3()
{
	return price3;
}
	void BurgerKing :: BList()
	{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t         BurgerKing               " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     1. Whopper          5$        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     2. double Whopper    10$      " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     3. King jr           15$      " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     8. Select Restaurant          " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     9. Customer Support           " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
