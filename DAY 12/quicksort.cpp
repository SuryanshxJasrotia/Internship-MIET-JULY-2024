#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void quicksort(vector<int>& arr) {
    if (arr.size() <= 1) {
        return;
    }
    int pivot = arr[arr.size() / 2];
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < arr.size(); ++i) {
        if (i != arr.size() / 2) {
            if (arr[i] < pivot) {
                left.push_back(arr[i]);
            } else {
                right.push_back(arr[i]);
            }
        }
    }
    quicksort(left);
    quicksort(right);
    
    arr.clear();
    arr.insert(arr.end(), left.begin(), left.end());
    arr.push_back(pivot);
    arr.insert(arr.end(), right.begin(), right.end());
}

int main() {
    vector<int> arr = {2, 6, 1, 8, 2, 9, 3, 2, 7};
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    // quicksort(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
        return 0;
}
