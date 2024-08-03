#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr_length;
    cout << "ENter the length of array";
    cin >> arr_length;
    int arr[arr_length];
label:
    int choice;

    cout << "1: insert the values :";
    cout << "2. delete";
    cout << "3. update";
    cout << "4. read";
    cout << "5. exit";
    cin >> choice;
    if (choice == 1)
    {
    label2:
        int count = 0;
        for (auto x : arr)
        {
            cout << "eneter the value at " << count << endl;
            cin >> arr[count];
            count++;
        }
        goto label;
    }
    // delete

    if (choice == 2)
    {
        if (arr[0] >= 0)
        {
            int deleted_index;
            cout << "Enter the index of array yoy wannt to delete";
            cin >> deleted_index;
            for (int i = deleted_index; i < arr_length; i++)
            {
                if (i < arr_length - 1)
                    arr[i] = arr[i + 1];
                else
                {
                    arr[i] = 0;
                }
            }
        }
        else
        {
            cout << "populate the array first !!";
            goto label;
        }
    }
    if (choice == 3)
    {
        if (arr[0] >= 0)
        {
            int updatedd_value;
            cout << "enetr the updated value";
            cin >> updatedd_value;
            int index;
            cout << "enetr the index at which you want to update value";
            cin >> index;
            arr[index] = updatedd_value;
        }
        else
        {
            cout << "populate the array first !!";
            goto label;
        }
    }
    if (choice == 4)
    {
        if (arr[0] >= 0)
        {
            for (int i = 0; i < arr_length; i++)
            {
                cout << arr[i] << endl;
            }
        }
        else
        {
            cout << "populate the array first !!";
            goto label;
        }
    }
    if (choice == 5)
    {
        exit(0);
    }

    return 0;
}