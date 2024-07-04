#include "Convert.hpp"

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const Convert& other) {
    (void)other;
}

Convert& Convert::operator=(const Convert& other) 
{
    (void)other;
    return *this;
}



std::string Convert::to_lower(const std::string& str)
{
	std::string lower_case = str;
	/* for (str &c :: lower_case) 
		c = std::tolower(c);*/
    for (size_t i = 0; i < lower_case.size(); i++)
    {
        char &c = lower_case[i];
        c = std::tolower(c);
    }
	return lower_case;
}

std::string Convert::to_upper(const std::string& str)
{
	std::string upper_case = str;
	/* for (str &c : upper_case)
		c = std::toupper(c); */
    for (size_t i = 0; i < upper_case.size(); i++)
    {
        char &c = upper_case[i];
        c = std::toupper(c);
    }
	return upper_case;
}