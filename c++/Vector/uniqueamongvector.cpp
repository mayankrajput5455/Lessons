#include <iostream>
#include <vector>

int findUnique(std::vector<int>& nums) {
    int unique = 0;
    for (int num : nums) {
        unique ^= num; // XOR all numbers
    }
    return unique; // The result will be the unique number
}

int main() {
    std::vector<int> nums = {1, 4, 2, 1, 2};
    int uniqueNumber = findUnique(nums);
    std::cout << "The unique number is: " << uniqueNumber << std::endl;
    return 0;
}
