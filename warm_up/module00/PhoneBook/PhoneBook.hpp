#include <iostream>
#include <map>

class PhoneBook 
{
    private:
    //Member Variables
        std::map<string, string> & contacts;
        std::string name;
        std::string number;
        std::string Nickname;
    public:
        //Orthodox Canonical Form
        PhoneBook();
        ~PhoneBook();
        PhoneBook(const PhoneBook& other);
        PhoneBook& operator=(const PhoneBook& other);

        //getter setter
        std::string getName();
        void setName(std::string name);
        std::string getNumber();
        void setNumber(std::string number);
        std::string getNickname();
        void setNickname(std::string Nickname);
        std::map<string, string> getContacts();

        //Member Functions
        void Add();
        void Remove();
        void Display();
        void Search();
        void Bookmark();
        void Exit();
}