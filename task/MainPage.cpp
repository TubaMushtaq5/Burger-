#include "One.h"


	MainPage :: MainPage()
	{
		price = 0;
		i = 0;
		for (int i = 0; i < 100; i++)
			orders[i] = "";
		choice = '\0';
	}

	void MainPage :: customerSupport()
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t           MANZ !                 " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t - Working since May 2020          " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t      How Can I Help You ?         " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     1. Courier is Late            " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     2. My Order didn't go through " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     3. Problem with Restaurant    " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
	void MainPage :: welcomePage()
	{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t         WElCOME!                 " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \tWhat Would You Like Today?         " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     1. McDonald's                 " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     2. KFC                        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     3. Burger.King                " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     4. Domino's                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     8. Exit the Program           " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t     9. Customer Support           " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
	void MainPage:: restaurantFood(char choice1)
	{
		choice = choice1;
		if (choice1 == '1')
			MList();
		else if (choice1 == '2')
			KList();
		else if (choice1 == '3')
			BList();
		else if (choice1 == '4')
			DList();
	}

	void MainPage::order(int a)
	{
		if (choice == '1')
		{
			if (a == '1')
			{
				orders[i] = "Hamburger";
				price += getMPrice1();
			}
			else if (a == '2')
			{
				orders[i] = "Cheeseburger";
				price += getMPrice2();
			}
			else if (a == '3')
			{
				orders[i] = "BigMac";
				price += getMPrice3();
			}
			else if (a == '4')
			{
				orders[i] = "McChicken";
				price += getMPrice4();
			}
			i++;
		}
		else if (choice == '2')
		{
			if (a == '1')
			{
				orders[i] = "smallBucket";
				price += getKPrice1();
			}
			else if (a == '2')
			{
				orders[i] = "Mediumbucket";
				price += getKPrice2();
			}
			else if (a == '3')
			{
				orders[i] = "Largebucket";
				price += getKPrice3();
			}
			i++;
		}
		else if (choice == '3')
		{
			if (a == '1')
			{
				orders[i] = "Whopper";
				price += getBPrice1();
			}
			else if (a == '2')
			{
				orders[i] = "Double Whopper";
				price += getBPrice2();
			}
			else if (a == '3')
			{
				orders[i] = "King jr";
				price += getBPrice3();
			}
			i++;
		}
		else if (choice == '4')
		{
			if (a == '1')
			{
				orders[i] = "Tikka Pizza";
				price += getDPrice1();
			}
			else if (a == '2')
			{
				orders[i] = "Cheese Burger";
				price += getDPrice2();
			}
			else if (a == '3')
			{
				orders[i] = "Grilled Burger";
				price += getDPrice3();
			}
			i++;
		}
	}
	void MainPage :: orderCheckout()
	{
		system("CLS");
		int j = 0;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t  Your Order will Sonn be Ready   " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t       Just Few More Details       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t       Here is your Order          " << "|" << endl;
		while (orders[j] != "")
		{
			cout << "\t\t\t\t\t" << "|" << " \t         "<<j+1 <<" : " << orders[j] << "           |" << endl;
			j++;
		}
		cout << "\t\t\t\t\t" << "|      " << " \t Total :" <<getPrice()<< "                       |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Payment Method :          " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t          1. Card                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t          2. Cash                  " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;

		
	}
	int MainPage::getPrice()
	{
		return price;
	}

	void MainPage::setPaymentMethod(char val)
	{
	/*	if (val != '1' || val != '2')
		{
			cout << "EXIT_ FAILURE" << endl;
			exit(0);
		}	*/	
		if (val == '1')
		{
			char a;
			cout << "\t\t\t\t\t  \t  Enter your card Number !             " << endl;
			int j = 0;
			cin.ignore();
			while(j!=16)
			{
				cout << "\t\t\t\t\t\t           ";
				a=getchar();
				if (a == '\n')
				{
					break;
				}
				paymentMethod[j] = a;
				j++;
			} 
			cout << endl;
			if (j == 16)
			{
				cout << "\t\t\t\t\t  \t  Great Transaction succesfull     " << endl;
			}
			else
			{
				cout << "\t\t\t\t\t  \t  Invalid code          " << endl;
				cout << "\t\t\t\t\t  \t		EXIT_ FAILURE      " << endl;
				exit(0);
			}

		}
		else if (val == '2')
		{
			cout << "\t\t\t\t\t  \t  Payment Received           " << endl;
			cout << "\t\t\t\t\t  \t   Thanks for Shopping       " << endl;
		}
	}
	void MainPage::waitingtime()
	{
		system("CLS");
		for (int k = 5; k > 0; k--)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "\t\t\t\t\t--------------------------------------------" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t       Courier is on its way      " << " |" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t         Courier Details :         " << "|" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t               NAME :              " << "|" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t             John watson           " << "|" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t              Vehicle :            " << "|" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t             BIKE # 5667           " << "|" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t          Waiting Time             " << "|" << endl;
			cout << "\t\t\t\t\t" << "|" << " \t           "<<k<<"                      " << "|" << endl;
			cout << "\t\t\t\t\t--------------------------------------------" << endl;
			Sleep(2000);
			system("CLS");
		}
	}
	void MainPage::rate()
	{
		int val;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t           Thank You!             " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Was Every Thing Okay?      " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t    Rate The courier (1-5)         " << "|" << endl;
		cout << "\t\t\t\t\t\t           "; cin >> val;
		cout << "\t\t\t\t\t" << "|" << " \t     Rate The Restaurnt(1-5)       " << "|" << endl;
		cout << "\t\t\t\t\t\t           "; cin >> val;
		cout << "\t\t\t\t\t" << "|" << " \t              8.Exit               " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t          9.Customer Support       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t  \t  What will you choose ?         " << endl;
		cout << "\t\t\t\t\t\t           "; cin >> val;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		if (val == 8)
			exit(0);
		else if (val == 9)
			customerSupport();
		else
		{
			cout << "Invalid COmmand";
		}
	}