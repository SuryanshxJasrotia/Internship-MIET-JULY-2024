#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // initialize an empty list;
    list<int> num;
    // make an iteratorn for the lsit
    list<int>::iterator it = num.begin();
    bool x = true;
    while (x == true)
    {
        int ch;
        cout << "ENTER THE CHOICE FROM BELLOW OPTIONS" << endl;
        cout << "1.Insert element\n2.reverse\n3.sort\n4.unique\n5.empty\n6.size\n7.clear\n8.merge\n9.print list\n10.exit\n";

        cout << "ENTER YOUR CHOICE : ";
        cout << endl;
        cin >> ch;
        cout << endl;

        switch (ch)
        {

        case 1:
            cout << "Enter the no of elements you want to add into the list : ";
            int elem;
            cin >> elem;
            for (int i = 0; i < elem; i++)
            {
                int k;
                cout << endl;
                cout << "Enter the " << i << " value : ";
                cin >> k;
                cout << endl;
                num.push_back(k);
            }
            break;
        case 2:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                num.reverse();
            }
            break;
        case 3:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                num.sort();
            }
            break;
        case 4:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                num.unique();
                cout << endl;
            }
            break;
        case 5:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                cout << "List is not empty";
                cout << endl;
            }
            break;
        case 6:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                cout << num.size();
                cout << endl;
            }

            break;
        case 7:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                cout << "Deleting all the values from the list ";
                cout << endl;
                num.clear();
            }
            break;
        case 8:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                cout << "Creating a new lsit to merge into the exiting list :";
                cout << endl;
                list<int> temp;
                cout << "Enter no of values ypu want to insert into new list :";
                int n;
                cin >> n;
                cout << endl;
                for (int i = 0; i < n; i++)
                {
                    int m;
                    cout << "Enter number " << i << " :";
                    cin>>m;
                    temp.push_back(m);
                    cout << endl;
                }
                cout << endl;
                temp.sort();
                num.sort();
                num.merge(temp);
            }
            break;
        case 9:
            if (num.empty())
            {
                cout << "List is empty please add elements to the list !";
                cout << endl;
            }
            else
            {
                for (auto i : num)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            break;
        case 10:
            x = false;
            break;
        default:
            cout << "Enter valid choice !!" << endl;
            cout << endl;
            break;
        }
    }
}