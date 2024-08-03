#include <cassert>
#include <vector>
#include"quicksort.h"
// Function to check if a vector is sorted in ascending order
bool isSorted(const std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test case 1: Random input
    std::vector<int> arr1 = {2, 6, 1, 8, 2, 9, 3, 2, 7};
    quicksort(arr1);
    assert(isSorted(arr1));

    // Test case 2: Empty input
    std::vector<int> arr2;
    quicksort(arr2);
    assert(isSorted(arr2));

    // Test case 3: Already sorted input
    std::vector<int> arr3 = {1, 2, 3, 4, 5};
    quicksort(arr3);
    assert(isSorted(arr3));

    // Test case 4: Input with duplicate elements
    std::vector<int> arr4 = {5, 2, 1, 4, 2, 3, 5};
    quicksort(arr4);
    assert(isSorted(arr4));

    // Test case 5: Input with negative numbers
    std::vector<int> arr5 = {-5, 2, -1, 4, -2, 3, 0};
    quicksort(arr5);
    assert(isSorted(arr5));

    // Add more test cases if needed

    return 0;
}