
#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"

int main()
{
    std::cout << "Testing easyfind..." << std::endl;

    // Test with vector
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    int value = 3;
    try
    {
        if (easyfind(vec, value) != vec.end())
            std::cout << "Value " << value << " found in vector." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Value " << value << " NOT found in vector." << std::endl;
    }

    // Test with list
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    value = 25;
    try
    {
        if (easyfind(lst, value) != lst.end())
            std::cout << "Value " << value << " found in list." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Value " << value << " NOT found in list." << std::endl;
    }

    std::cout << "Testing complete." << std::endl;
}
