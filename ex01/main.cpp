#include <iostream>
#include <string>
#include "Person.class.hpp"
using namespace std;

void    addFistName(Person *person) {
	while(true)
	{
		std::cout << "first name: ";
		std::string     input;
		getline(cin, input);
		if (person->setFirstName(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}

}

void    addLastName(Person *person) {
	while(true)
	{
		std::cout << "last name: ";
		std::string     input;
		getline(cin, input);
		if (person->setLastName(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addNickName(Person *person) {
	while(true)
	{
		std::cout << "Nickname: ";
		std::string     input;
		getline(cin, input);
		if (person->setNickname(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addLogin(Person *person) {
	while(true)
	{
		std::cout << "Login: ";
		std::string     input;
		getline(cin, input);
		if (person->setLogin(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addAddress(Person *person) {
	while(true)
	{
		std::cout << "Address: ";
		std::string     input;
		getline(cin, input);
		if (person->setAddress(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addEmail(Person *person) {
	while(true)
	{
		std::cout << "Email: ";
		std::string     input;
		getline(cin, input);
		if (person->setEmail(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addPhone(Person *person) {
	while(true)
	{
		std::cout << "Phone: ";
		std::string     input;
		getline(cin, input);
		if (person->setPhone(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addBirthday(Person *person) {
	while(true)
	{
		std::cout << "Birthday: ";
		std::string     input;
		getline(cin, input);
		if (person->setBirthday(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}

}

void    addMeal(Person *person) {
	while(true)
	{
		std::cout << "Favorite meal: ";
		std::string     input;
		getline(cin, input);
		if (person->setMeal(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addUnderwear(Person *person) {
	while(true)
	{
		std::cout << "Underwear: ";
		std::string     input;
		getline(cin, input);
		if (person->setUnderwear(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    addSecret(Person *person) {
	while(true)
	{
		std::cout << "Darkest secret: ";
		std::string     input;
		getline(cin, input);
		if (person->setSecret(input.c_str()))
			break;
		else {
			std::cout << "Wrong input format!" << std::endl;
		}
	}
}

void    doAdd(void)
{
	if (Person::nbr == 8)
	{
		std::cout << "Phonebook full" << std::endl;
		return;
	}

	std::cout << "ADDING NEW USER..." << std::endl;
	Person  person;

	addFistName(&person);
	addLastName(&person);
	addNickName(&person);
	addLogin(&person);
	addAddress(&person);
	addEmail(&person);
	addPhone(&person);
	addBirthday(&person);
	addMeal(&person);
	addUnderwear(&person);
	addSecret(&person);

	if (Person::add(person))
		std::cout << "You can add " << 8 - Person::nbr << " new users" << std::endl;
	else
		std::cout << "Phonebook Full" << std::endl;
}

void    displayTruncate(const char *str)
{
	int i;

	i = 0;
	while (i++ < 9)
	{
		if (str && *str)
			std::cout << *str++;
		else
			std::cout << " ";
	}
	if (str && *str)
	{
		if ((str + 1) && *(str + 1))
			std::cout << ".";
		else
			std::cout << *str;
	}
	else
		std::cout << " ";
}

void    display(Person person)
{
	std::cout << "first name: " << person.getFirstName().c_str() << std::endl;
	std::cout << "last name: " << person.getLastName().c_str() << std::endl;
	std::cout << "Nickname: " << person.getNickname().c_str() << std::endl;
	std::cout << "Login: " << person.getLogin().c_str() << std::endl;
	std::cout << "Address: " << person.getAddress().c_str() << std::endl;
	std::cout << "Email: " << person.getEmail().c_str() << std::endl;
	std::cout << "Phone: " << person.getPhone().c_str() << std::endl;
	std::cout << "Birthday: " << person.getBirthday().c_str() << std::endl;
	std::cout << "Favorite meal: " << person.getMeal().c_str() << std::endl;
	std::cout << "Underwear: " << person.getUnderwear().c_str() << std::endl;
	std::cout << "Darkest secret: " << person.getSecret().c_str() << std::endl;
}

void   finOnePerson(void)
{
	string  line;
	int     i;

	std::cout << "Chose user by id: ";
	getline(cin, line);
	i = stoi(line);
	if (i >= 0 && i <= Person::nbr)
		display(Person::list[i]);
	else
		std::cout << "404 Not fount" << std::endl;
}

void    doSearch()
{
	int     i;

	i = 0;
	while (i < Person::nbr)
	{
		std::cout << i << "        ";
		std::cout << " | ";
		displayTruncate(Person::list[i].getFirstName().c_str());
		std::cout << " | ";
		displayTruncate(Person::list[i].getLastName().c_str());
		std::cout << " | ";
		displayTruncate(Person::list[i].getNickname().c_str());
		std::cout << std::endl;
		i++;
	}
	finOnePerson();
}

int     main(void)
{
	std::string         input;
	const char          *ACTION_ADD = "ADD";
	const char          *ACTION_EXIT= "EXIT";
	const char          *ACTION_SEARCH = "SEARCH";

	std::cout << "Welcome to your awesome phonebook software" << std::endl;
	while (true)
	{
		std::cout << "Make a choice (ADD, EXIT, SEARCH): ";
		getline(cin, input);
		if (!std::strcmp(input.c_str(), ACTION_ADD))
			doAdd();
		else if (!std::strcmp(input.c_str(), ACTION_SEARCH))
			doSearch();
		else if (!std::strcmp(input.c_str(), ACTION_EXIT))
			break;
		else
			std::cout << "Wrong command!" << std::endl;
	}
	std::cout << "Thanks for your visit!" << std::endl;
	return (0);
}