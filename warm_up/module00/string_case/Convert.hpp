#include <iostream>
#include <string>

class Convert
{
    public:
        //Orthodox Canonical Form
        Convert();
        ~Convert();
        Convert(const Convert& other);
        Convert& operator=(const Convert& other);

        /* void operation(int number, std::string str); */
        std::string to_upper(const std::string& str);
        std::string to_lower(const std::string& str);
};