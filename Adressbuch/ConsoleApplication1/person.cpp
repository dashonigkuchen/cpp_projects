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
	if (overwrite)
	{
		this->surname = surname;
		return true;
	}
	else
	{
		if (this->surname.length() == 0)
		{
			this->surname = surname;
			return true;
		}
		return false;
	}
}

bool Person::setBirthday(std::string birthday, bool overwrite)
{
	if (overwrite)
	{
		this->birthday = birthday;
		return true;
	}
	else
	{
		if (this->birthday.length() == 0)
		{
			this->birthday = birthday;
			return true;
		}
		return false;
	}
}

bool Person::setAddress(std::string address, bool overwrite)
{
	if (overwrite)
	{
		this->address = address;
		return true;
	}
	else
	{
		if (this->address.length() == 0)
		{
			this->address = address;
			return true;
		}
		return false;
	}
}

bool Person::setCity(std::string city, bool overwrite)
{
	if (overwrite)
	{
		this->city = city;
		return true;
	}
	else
	{
		if (this->city.length() == 0)
		{
			this->city = city;
			return true;
		}
		return false;
	}
}

bool Person::setPostalCode(std::string postalCode, bool overwrite)
{
	if (overwrite)
	{
		this->postalCode = postalCode;
		return true;
	}
	else
	{
		if (this->postalCode.length() == 0)
		{
			this->postalCode = postalCode;
			return true;
		}
		return false;
	}
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