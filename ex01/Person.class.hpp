#ifndef PERSON_CLASS_H
# define PERSON_CLASS_H

# include <iostream>
# include <string>

class Person
{

	public:
		Person(void);
		~Person(void);
		static int      nbr;
		static Person   list[8];


		static bool     add(Person person);
		static void     search(void);
		static Person   find(int index);

		std::string			getFirstName(void) const;
		std::string			getLastName(void) const;
		std::string			getNickname(void) const;
		std::string			getLogin(void) const;
		std::string			getAddress(void) const;
		std::string			getEmail(void) const;
		std::string			getPhone(void) const;
		std::string			getBirthday(void) const;
		std::string			getMeal(void) const;
		std::string			getUnderwear(void) const;
		std::string			getSecret(void) const;

		bool			setFirstName(std::string str);
		bool			setLastName(std::string str);
		bool			setNickname(std::string str);
		bool			setLogin(std::string str);
		bool			setAddress(std::string str);
		bool			setEmail(std::string str);
		bool			setPhone(std::string str);
		bool			setBirthday(std::string str);
		bool			setMeal(std::string str);
		bool			setUnderwear(std::string str);
		bool			setSecret(std::string str);

	private:
		std::string			firstName;
		std::string			lastName;
		std::string			nickname;
		std::string			login;
		std::string			address;
		std::string			email;
		std::string			phone;
		std::string			birthday;
		std::string			meal;
		std::string			underwear;
		std::string			secret;
};

#endif