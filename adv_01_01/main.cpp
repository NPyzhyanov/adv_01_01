#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers{4, 7, 9, 14, 12};
    
    auto print_element = [] (const int &elem) {std::cout << " " << elem;};
    auto print_vector = [print_element] (std::string message, const std::vector<int> &vector_to_print)
    {
        std::cout << message;
        std::for_each(vector_to_print.begin(), vector_to_print.end(), print_element);
        std::cout << std::endl;
    };

    print_vector("Input data:", numbers);
    
    bool odd = false;
    std::for_each(numbers.begin(), numbers.end(), [&odd] (int &elem) {elem *= (odd ? 3 : 1); odd = !odd;});
    
    print_vector("Output data:", numbers);
    
    return 0;
}
