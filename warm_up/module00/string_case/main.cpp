#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " <case> <string>" << std::endl;
    }
    else
    {
        std::string str = argv[2];
        std::string case_str = argv[1];
        Convert convert;
        if (case_str == "up")
            std::cout << convert.to_upper(str) << std::endl;
        else if (case_str == "down")
            std::cout << convert.to_lower(str) << std::endl;
        else
            std::cerr << "Invalid case: " << argv[1] << std::endl;
    }
}