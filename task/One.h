#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
class Dominos
{
private:
	int price1;
	int price2;
	int price3;
	
public:
	Dominos();
	int getDPrice1();
	int getDPrice2();
	int getDPrice3();
	void DList();
};

class BurgerKing
{
private:
	int price1;
	int price2;
	int price3;
public:
	int getBPrice1();
	int getBPrice2();
	int getBPrice3();
	BurgerKing();
	void BList();
};

class KFC
{
private:
	int price1;
	int price2;
	int price3;
public:
	int getKPrice1();
	int getKPrice2();
	int getKPrice3();
	KFC();
	void KList();
};

class McDonalds
{
private:
	int price1;
	int price2;
	int price3;
	int price4;
public:
	McDonalds();
	int getMPrice1();
	int getMPrice2();
	int getMPrice3();
	int getMPrice4();
	void MList();
};

class MainPage :public McDonalds, public KFC, public BurgerKing, public Dominos
{
private:
	int price;
	int i;
	char paymentMethod[16];
	char choice;
	string orders[100];
public:
	MainPage();
	void rate();
	void customerSupport();
	void welcomePage();
	void restaurantFood(char choice);
	void order(int a);
	void orderCheckout();
	int getPrice();
	void setPaymentMethod(char val);
	void waitingtime();
};