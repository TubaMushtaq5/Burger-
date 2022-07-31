#include "One.h"

Dominos::Dominos()
{
	price1 = 5;
	price2 = 10;
	price3 = 15;
}
int Dominos::getDPrice1()
{
	return price1;
}
int Dominos::getDPrice2()
{
	return price2;
}
int Dominos::getDPrice3()
{
	return price3;
}
void Dominos:: DList()
{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t           Domino's               " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     1. Tikka Pizza        5$      " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     2. Cheese Pizza       10$     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     3. Grilled burger     15$     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     8. Select Restaurant          " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     9. Customer Support           " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
}
