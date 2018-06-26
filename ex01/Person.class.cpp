#include "Person.class.hpp"

Person   Person::list[8];
int      Person::nbr = 0;


/**
 * Constructor
 */
Person::Person() {

}

/**
 * Destructor
 */
Person::~Person() {

}

bool    Person::add(Person person) {

	if (Person::nbr > 7)
		return false;
	
	list[Person::nbr].firstName = person.firstName;
	list[Person::nbr].lastName = person.lastName;
	list[Person::nbr].nickname = person.nickname;
	list[Person::nbr].login = person.login;
	list[Person::nbr].address = person.address;
	list[Person::nbr].email = person.email;
	list[Person::nbr].phone = person.phone;
	list[Person::nbr].birthday = person.birthday;
	list[Person::nbr].meal = person.meal;
	list[Person::nbr].underwear = person.underwear;
	list[Person::nbr].secret = person.secret;

	std::cout << "Result " <<  list[Person::nbr].getSecret() << std::endl;

	Person::nbr++;
	return true;
}


bool    Person::setFirstName(std::string str) {
	this->firstName = str;
	return true;
}

bool    Person::setLastName(std::string str) {
	this->lastName = str;
	return true;
}

bool    Person::setNickname(std::string str) {
	this->nickname = str;
	return true;
}

bool    Person::setLogin(std::string str) {
	this->login = str;
	return true;
}

bool    Person::setAddress(std::string str) {
	this->address = str;
	return true;
}

bool    Person::setEmail(std::string str) {
	this->email = str;
	return true;
}

bool    Person::setPhone(std::string str) {
	this->phone = str;
	return true;
}

bool    Person::setBirthday(std::string str) {
	this->birthday = str;
	return true;
}

bool    Person::setMeal(std::string str) {
	this->meal = str;
	return true;
}

bool    Person::setUnderwear(std::string str) {
	this->underwear = str;
	return true;
}

bool    Person::setSecret(std::string str) {
	this->secret = str;
	return true;
}

std::string  Person::getFirstName(void) const {
	return this->firstName;
}

std::string  Person::getLastName(void) const {
	return this->lastName;
}

std::string  Person::getNickname(void) const {
	return this->nickname;
}

std::string  Person::getLogin(void) const {
	return this->login;
}

std::string  Person::getEmail(void) const {
	return this->email;
}

std::string  Person::getAddress(void) const {
	return this->address;
}

std::string Person::getPhone(void) const {
	return this->phone;
}

std::string  Person::getBirthday(void) const {
	return this->birthday;
}

std::string  Person::getMeal(void) const {
	return this->meal;
}

std::string  Person::getUnderwear(void) const {
	return this->underwear;
}


std::string  Person::getSecret(void) const {
	return this->secret;
}