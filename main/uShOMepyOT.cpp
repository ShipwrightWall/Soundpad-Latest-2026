#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility {
public:
    static int sum(const std::vector<int>& numbers) {
        return std::accumulate(numbers.begin(), numbers.end(), 0);
    }
    static double average(const std::vector<int>& numbers) {
        return static_cast<double>(sum(numbers)) / numbers.size();
    }
    static std::vector<int> sortAscending(std::vector<int> numbers) {
        std::sort(numbers.begin(), numbers.end());
        return numbers;
    }
    static std::vector<int> sortDescending(std::vector<int> numbers) {
        std::sort(numbers.begin(), numbers.end(), std::greater<int>());
        return numbers;
    }
    static void printVector(const std::vector<int>& numbers) {
        for (const auto& num : numbers) {
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }
};
int main() {
    std::vector<int> numbers = {5, 2, 3, 8, 1};
    std::cout << "Sum: " << Utility::sum(numbers) << std::endl;
    std::cout << "Average: " << Utility::average(numbers) << std::endl;
    std::cout << "Sorted Ascending: ";
    Utility::printVector(Utility::sortAscending(numbers));
    std::cout << "Sorted Descending: ";
    Utility::printVector(Utility::sortDescending(numbers));
    return 0;
}
