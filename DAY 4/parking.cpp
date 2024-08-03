#include <iostream>
using namespace std;
int main()
{
        int n = 20, d, b, e, c, p, count1 = 0, count2 = 0, count3 = 0;
        for (int i = 0; i < n; i++)
        {
                cout << "1. --- Park car ---" << endl;
                cout << "2. --- Park bike ---" << endl;
                cout << "3. --- Park rickshaw---" << endl;
                cout << "4. ---Exit---" << endl;
                cout << "Enter your choice:" << endl;
                cin >> d;
                if (d == 1)
                {
                        cout << "Enter the number of cars parked:" << endl;
                        cin >> b;
                        count1 += b;
                        cout << " Number of car parked:" << count1 << endl;
                }
                if (d == 2)
                {
                        cout << "Enter the number of bikes parked:" << endl;
                        cin >> c;
                        count2 += c;
                        cout << " Number of bikes parked:" << count2 << endl;
                }
                if (d == 3)
                {
                        cout << "Enter the number of rickshaws parked:" << endl;
                        cin >> e;
                        count3 += e;
                        cout << " Number of rickshaw parked:" << count3 << endl;
                }

                if (d > 4)
                {
                        cout << "Invalid choice:" << endl;
                        cout << "Please enter from 1-5" << endl;
                }
                cout << "---Do you want to perform again--?" << endl;
                cout << "---Press the below choices:" << endl;
                if (d == 4)
                {
                        cout << "----EXIT---" << endl;
                }
        }
        return 0;
}