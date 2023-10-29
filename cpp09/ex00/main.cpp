#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2){
        std::cout << "invalid numbers of parameters" << std::endl;
        return (-1);
    }
    try
    {
        BitcoinExchange bitcoin(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}