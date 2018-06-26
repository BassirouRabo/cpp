#include "ressources/Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int     Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int Account::getTotalAmount() {
	return Account::_totalAmount;
}

int Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	std::cout
			<< "[20150406_153629] "
			<< "accounts:" << Account::getNbAccounts()
			<< ";total:" << Account::getTotalAmount()
			<< ";deposits:" << Account::getNbDeposits()
			<< ";withdrawals:" << Account::getNbWithdrawals()
			<< std::endl;
}

/**
 * public Constructor
 * @param initial_deposit
 */
Account::Account(int initial_deposit) {
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_totalNbDeposits += this->_nbDeposits;
	Account::_totalNbWithdrawals += this->_nbWithdrawals;

	std::cout
			<< "[20150406_153629] "
			<< "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created"
			<< std::endl;
}

/**
 * Destructor
 */
Account::~Account() {

}

/**
 * private Constructor
 */
Account::Account() {

}

void Account::makeDeposit(int deposit) {

}

bool Account::makeWithdrawal(int withdrawal) {
	return true;
}

int Account::checkAmount() const {
	return 0;
}

void Account::displayStatus() const {

}
