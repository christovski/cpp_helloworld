#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "DEEZ", "and", "DOZE", "things", "in", "life", "!"};

    for (const std::string& word : msg)
    {
        std::cout << word.c_str() << std::endl;
    }

    std::vector<double> my_range;
    for (int i = 0; i < 100; i++)
    {
        my_range.push_back(i);
    }

    std::cout.precision(1);
    for (auto k : my_range)
    {
        std::cout << std::to_string(k) << std::endl;
    }

    std::cout << std::endl;
}
