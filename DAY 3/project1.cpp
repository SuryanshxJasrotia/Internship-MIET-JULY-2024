#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr_length;
    cout << "Enter the length of the array: ";
    cin >> arr_length;

    vector<int> arr(arr_length);

    while (true) {
        int choice;
        cout << "\n1. Insert values\n2. Delete\n3. Update\n4. Read\n5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                for (int i = 0; i < arr_length; i++) {
                    cout << "Enter the value at index " << i << ": ";
                    cin >> arr[i];
                }
                break;
            }
            case 2: {
                if (arr[0] >= 0) {
                    int deleted_index;
                    cout << "Enter the index of the element you want to delete: ";
                    cin >> deleted_index;
                    if (deleted_index >= 0 && deleted_index < arr_length) {
                        for (int i = deleted_index; i < arr_length - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        arr[arr_length - 1] = 0;
                    } else {
                        cout << "Invalid index. Please try again.\n";
                    }
                } else {
                    cout << "Populate the array first!\n";
                }
                break;
            }
            case 3: {
                if (arr[0] >= 0) {
                    int updated_value, index;
                    cout << "Enter the updated value: ";
                    cin >> updated_value;
                    cout << "Enter the index at which you want to update the value: ";
                    cin >> index;
                    if (index >= 0 && index < arr_length) {
                        arr[index] = updated_value;
                    } else {
                        cout << "Invalid index. Please try again.\n";
                    }
                } else {
                    cout << "Populate the array first!\n";
                }
                break;
            }
            case 4: {
                if (arr[0] >= 0) {
                    for (int i = 0; i < arr_length; i++) {
                        cout << arr[i] << endl;
                    }
                } else {
                    cout << "Populate the array first!\n";
                }
                break;
            }
            case 5: {
                exit(0);
            }
            default: {
                cout << "Invalid choice. Please select a valid option.\n";
            }
        }
    }

    return 0;
}
