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
	std::cout
			<< "[20150406_153629] "
			<< "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed"
			<< std::endl;
}

/**
 * private Constructor
 */
Account::Account() {

}

void Account::makeDeposit(int deposit) {
	std::cout
			<< "[20150406_153629] "
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";deposit:" << deposit
			<< ";amount:" << this->_amount + deposit
			<< ";deposits:" << this->_nbDeposits
			<< std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
	if (this->_amount < withdrawal)
	{
		std::cout
				<< "[20150406_153629] "
				<< "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount
				<< ";withdrawal:refused"
				<< std::endl;
		return false;
	}
	std::cout
			<< "[20150406_153629] "
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount - withdrawal
			<< ";deposits:" << this->_nbDeposits
			<< std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return true;
}

int Account::checkAmount() const {
	return this->_amount;
}

void Account::displayStatus() const {
	std::cout
			<< "[20150406_153629] "
			<< "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals
			<< std::endl;
}
