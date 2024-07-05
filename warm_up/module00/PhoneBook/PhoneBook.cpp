#include "PhoneBook.hpp"

// Constructor
PhoneBook::PhoneBook() : name(""), number(""), Nickname("") 
{
    contacts[number] = name + " " + number + " " + Nickname;
}

// Destructor
PhoneBook::~PhoneBook()
{}

// Copy Constructor
PhoneBook::PhoneBook(const PhoneBook& other)
{
    contacts = other.contacts;
    name = other.name;
    number = other.number;
    Nickname = other.Nickname;
}

// Copy Assignment Operator
PhoneBook& PhoneBook::operator=(const PhoneBook& other)
{
    if (this != &other)
    {
        contacts = other.contacts;
        name = other.name;
        number = other.number;
        Nickname = other.Nickname;
    }
    return *this;
}

// Getter for name
std::string PhoneBook::getName()
{
    return name;
}

// Setter for name
void PhoneBook::setName(std::string name)
{
    this->name = name;
}

// Getter for number
std::string PhoneBook::getNumber()
{
    return number;
}

// Setter for number
void PhoneBook::setNumber(std::string number)
{
    this->number = number;
}

// Getter for Nickname
std::string PhoneBook::getNickname()
{
    return Nickname;
}

// Setter for Nickname
void PhoneBook::setNickname(std::string Nickname)
{
    this->Nickname = Nickname;
}

// Getter for contacts
std::map<std::string, std::string> PhoneBook::getContacts()
{
    std::string key = getName();
    std::string value = getName() + " " + getNumber() + " " + getNickname();    
    contacts[key] = value;
    return contacts;
}

void PhoneBook::Add()
{
    
}