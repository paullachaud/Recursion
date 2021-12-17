#include <vector>
#include <iterator>
#include <iostream>


void print(std::ostream& os, std::vector<int> const  &values)
{
    std::cout << "Printing values: " << std::endl;
    for (const auto val : values) {
        os << val << " ";
    }
    os << std::endl;
}

int sumHelper(std::vector<int> const& input, std::vector<int>::iterator it1, std::vector<int>::iterator it2)
{
    if (it1 == it2) return *it1;

    return *it1 + sumHelper(input, std::next(it1), it2);
}

int sum(std::vector<int> input)
{
    if (input.size() == 1 || input.size() == 0) return input[0];

    return sumHelper(input, std::begin(input), std::end(input)-1);
}

int main() {
    std::vector<int> values {1,2,3,4,6,5,7};
    print(std::cout, values);
    std::cout << sum(values);
    std::cin.get();
}


