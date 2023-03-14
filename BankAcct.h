#ifndef BANKACCT_H
#define BANKACCT_H
#include <string>

class bankAccount {

public:
	void deposit(double); // add money to account
	void withdraw(double); //take money out of account
	double getInterest() const; // balance times interest rate
	void updateBalance(); //update balance by adding interest amount to balance
	void printInfo() const; // displays all account info
	int getAccountNumber() const; 
	std::string getAccountName() const;
	std::string getAccountType() const;
	double getBalance() const;
	double getInterestRate() const;

	bankAccount(std::string,std::string,double,double); // the account number is auto generated at declaration


private:
	std::string accountName; //account holders name 
	int accountNum; //account number
	std::string accountType; //account type (checkings or savings)
	double accountBalance; //account balance
	double rate; //account interest rate decimal value
	static int RanNum; // automatically assign account numbers during account creation
};



#endif