// Aissignment09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void safeViewAccountBalanceTransaction(int accountBalanceOne, int accountBalanceTwo);
void HackViewAccountsBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo);



int main()
{
	int terroristsAccountBalance = 2100000;
	int joesCoffeeShopAccountsBalance = 33;
	cout << "Original values \n";
	cout << "terroristsAccountBalance: " << terroristsAccountBalance << "\n";
	cout << "joesCoffeeShopAccountBalance: " << joesCoffeeShopAccountsBalance << "\n\n";

	cout << "Calling NormalTransaction()\n";
	safeViewAccountsBalanceTransaction(terroristsAccountBalance, joesCoffeeShopAccountsBalance);
	cout << "terroristsAccountBalance: " << terroristsAccountBalance << "\n";
	cout << "joesCoffeeShopAccountBalance: " << joesCoffeeShopAccountsBalance << "\n\n";

	cout << "Calling HackedTransaction()\n";
	HackViewAccountsBalanceTransaction(terroristsAccountBalance, joesCoffeeShopAccountsBalance);
	cout << "terroristsAccountBalance: " << terroristsAccountBalance << "\n";
	cout << "joesCoffeeShopAccountBalance: " << joesCoffeeShopAccountsBalance << "\n";
		

	system("pause");
	return 0;
}

void safeViewAccountBalanceTransaction(int accountBalanceOne, int accountBalanceTwo)
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;
}

void HackViewAccountsBalanceTransaction(int accountBalanceOne, int accountBalanceTwo)
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;
}