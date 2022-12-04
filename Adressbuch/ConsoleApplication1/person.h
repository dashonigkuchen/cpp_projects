#pragma once
#include <string>

class Person
{
public:
	Person(
		std::string forename,
		std::string surname,
		std::string birthday,
		std::string address,
		std::string city,
		std::string postalCode
	);

	bool setForname(std::string forename, bool overwrite = false);
	bool setSurname(std::string surname, bool overwrite = false);
	bool setBirthday(std::string birthday, bool overwrite = false);
	bool setAddress(std::string address, bool overwrite = false);
	bool setCity(std::string city, bool overwrite = false);
	bool setPostalCode(std::string postalCode, bool overwrite = false);

	std::string getForename();
	std::string getSurname();
	std::string getBirthday();
	std::string getAddress();
	std::string getCity();
	std::string getPostalCode();

private:
	std::string forename;
	std::string surname;
	std::string birthday;
	std::string address;
	std::string	city;
	std::string postalCode;
};