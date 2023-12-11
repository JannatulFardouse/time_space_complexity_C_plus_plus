#include <iostream>

void twoSum(const int nums[], int size, int target, int result[]) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }

    // This return statement should not be reached, assuming there is exactly one solution.
}

void getInputArray(int nums[], int size) {
    std::cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> nums[i];
    }
}

int main() {
    // Example usage
    const int size1 = 4;
    int nums1[size1];
    getInputArray(nums1, size1);
    int target1 = 9;
    int result1[2] = {0};

    twoSum(nums1, size1, target1, result1);

    std::cout << "Task 1 Example 1: [" << result1[0] << " " << result1[1] << "]" << std::endl;

    const int size2 = 3;
    int nums2[size2];
    getInputArray(nums2, size2);
    int target2 = 6;
    int result2[2] = {0};

    twoSum(nums2, size2, target2, result2);

    std::cout << "Task 1 Example 2: [" << result2[0] << " " << result2[1] << "]" << std::endl;

    const int size3 = 2;
    int nums3[size3];
    getInputArray(nums3, size3);
    int target3 = 6;
    int result3[2] = {0};

    twoSum(nums3, size3, target3, result3);

    std::cout << "Task 1 Example 3: [" << result3[0] << " " << result3[1] << "]" << std::endl;

    return 0;
}
