#include "person.h"

Person::Person(std::string forename, std::string surname, std::string birthday, std::string address, std::string city, std::string postalCode)
{
	this->forename = forename;
	this->surname = surname;
	this->birthday = birthday;
	this->address = address;
	this->city = city;
	this->postalCode = postalCode;
}


bool Person::setForname(std::string forename, bool overwrite)
{
	if (overwrite) 
	{
		this->forename = forename;
		return true;
	}
	else 
	{
		if (this->forename.length() == 0)
		{
			this->forename = forename;
			return true;
		}
		return false;
	}
}

bool Person::setSurname(std::string surname, bool overwrite)
{
	return false;
}

bool Person::setBirthday(std::string birthday, bool overwrite)
{
	return false;
}

bool Person::setAddress(std::string address, bool overwrite)
{
	return false;
}

bool Person::setCity(std::string city, bool overwrite)
{
	return false;
}

bool Person::setPostalCode(std::string postalCode, bool overwrite)
{
	return false;
}


std::string Person::getForename()
{
	return this->forename;
}

std::string Person::getSurname()
{
	return this->surname;
}

std::string Person::getBirthday()
{
	return this->birthday;
}

std::string Person::getAddress()
{
	return this->address;
}

std::string Person::getCity()
{
	return this->city;
}

std::string Person::getPostalCode()
{
	return this->postalCode;
}