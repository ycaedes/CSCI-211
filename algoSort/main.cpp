#include <iostream>
#include <algorithm>

std::vector<int> sortNumbers(const std::vector<int>& input) {
    std::vector<int> sorted(input);
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}

int main() {
    int arr[] = {5, 2, 8, 1};
    std::vector<int> nums(arr, arr sizeof(arr) / sizeof(arr[0]));

    std::vector<int> result = sortNumbers(nums);

    for (const auto& elem : result) {
        std::cout << elem << " ";
    }

    return 0;
}
