#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include "BankAcct.h"

int main() {

	std::srand(time(NULL));

	bankAccount customers[10] = { bankAccount("James Bond", "checkings", 0, 5),
		bankAccount("Carry Heart", "checkings", 100, 3),bankAccount("Larry Lou", "savings", 500000, 10),
	bankAccount("Faith Kind", "checkings", 0, 2), bankAccount("Gerry Bond", "savings", 1000.20, 5), 
	bankAccount("Harry Potter", "savings", 2342.44, 10), bankAccount("Lane Drive", "checkings", 502100, 20), 
	bankAccount("Tom James", "checkings", 900000, 30), bankAccount("Terry Ferry", "savings", 10.00, 1), 
	bankAccount("Pan Fran", "checkings", 1.00, 1), };
	
	for (int i = 0; i < 10; i++) {
		customers[i].printInfo();
	}
	
	customers[0].deposit(100.00);
	customers[0].printInfo();

	customers[5].withdraw(1000.00);
	customers[5].printInfo();

	std::cout << "Account Type for customer[8]: " << customers[8].getAccountType() << '\n';
	customers[8].printInfo();

	std::cout << "Account Name for customer[2]: " << customers[2].getAccountName() << '\n';
	customers[2].withdraw(500000);
	customers[2].printInfo();
	
	std::cout << "Account Number for customer[1]: " << customers[1].getAccountNumber() << '\n';
	std::cout << "Account Name for customer[1]: " << customers[1].getAccountName() << '\n';
	std::cout << "Account Type for customer[1]: " << customers[1].getAccountType() << '\n';
	std::cout << "Account Balance for customer[1]: " << customers[1].getBalance() << '\n';
	return 0;
}
