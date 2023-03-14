#include "BankAcct.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

/*
public:
	void deposit(double); // add money to account
	void withdraw(double); //take money out of account
	double getInterest(double) const; // balance times interest rate
	void updateBalance(double); //update balance by adding interest amount to balance
	void printInfo() const; // displays all account info
	int getAccountNumber(int& Number) const;
	std::string getAccountName(std::string& Name) const;
	std::string getAccountType(std::string& Type) const;
	double getBalance(double& Balance) const;
	double getInterestRate(double& interestRate) const;

	bankAccount(std::string, std::string, double, double); // the account number is auto generated at declaration


private:
	std::string accountName; //account holders name 
	int accountNum; //account number
	std::string accountType; //account type (checkings or savings)
	double accountBalance; //account balance
	double rate; //account interest rate decimal value
	static int RanNum; // automatically assign account numbers during account creation
};
*/

void bankAccount::deposit(double money) {
	//adds the funds to account
	//reference to the correct account so we are not adding to the wrong account
	std::cout << "Deposited: $" << money << std::endl;
	accountBalance += money;
}
void bankAccount::withdraw(double money) {
	//takes out the input funds from the account
	//reference to the correct account so we are not adding to the wrong account
	if (accountBalance >= money)
	{
		std::cout << "withdraw from balance of: $" << money << std::endl;
		accountBalance -= money;
	}
	else
	{
		std::cout << "ERROR: Cannot withdraw " << money << " since current balance is " << accountBalance << std::endl;
	}
}

double bankAccount::getInterest() const {
	//returns the interest based on the balance of the holder's account
	return accountBalance * rate;

}
void bankAccount::updateBalance() {
	//access the results of get interest function
	//updates the balance with the interest amount
	std::cout << "Updating balance\n" << std::endl;
	accountBalance += getInterest();
}
void bankAccount::printInfo() const {
	std::cout << '\n' << std::endl;
	std::cout << std::setw(50) << "==============================" << std::endl;
	std::cout << std::setw(50) << "Account Holder's Information" << std::endl;
	std::cout << std::setw(50) << "==============================" << std::endl;
	std::cout << "Account Type   AccountID         Student Name          Balance" << std::endl;
	std::cout << "------------  ------------   -------------------  -----------------" << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(2) << accountType << " " << std::setw(14) << accountNum << " " << std::setw(20) << accountName << " " << std::setw(5) << "$"  << std::setw(15) << accountBalance << std::endl;
	std::cout << '\n' << std::endl;

}

int bankAccount::getAccountNumber() const {
	return accountNum;
}

std::string bankAccount::getAccountName() const {
	return accountName;
}

std::string bankAccount::getAccountType() const {
	return accountType;
}

double bankAccount::getBalance() const {
	return accountBalance;
}


double bankAccount::getInterestRate() const {
	return rate;
}

bankAccount::bankAccount(std::string name, std::string type, double balance, double intRate) {
	//generates random nums of 10 for the account number
	accountNum = (rand() % 9999) + 1;

	accountName = name;
	accountType = type;
	accountBalance = balance;
	rate = intRate;

}