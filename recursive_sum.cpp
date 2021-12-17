#include <vector>
#include <iostream>


void print(std::ostream& os, std::vector<int> const  &values)
{
    std::cout << "Printing values: " << std::endl;
    for (const auto val : values) {
        os << val << " ";
    }
    os << std::endl;
}

int sumHelper(std::vector<int> const& input, int left, int right)
{
    if (left == right) return input[left];

    return input[left] + sumHelper(input, left+1, right);
}

int sum(std::vector<int> input)
{
    if (input.size() == 1 || input.size() == 0) return input[0];

    return sumHelper(input, 0, input.size()-1);
}

int main() {
    std::vector<int> values {1,2,3,4,6,7};
    print(std::cout, values);
    std::cout << sum(values);
    std::cin.get();
}


