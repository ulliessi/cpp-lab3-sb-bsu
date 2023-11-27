#include<iostream>
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    cin >> k;

    if (k > 0) {
        do {
            cout << "Enter integer nr. " << i << ": ";
            cin >> number;

            if (cin.fail()) {
                cout << "Invalid input. Please enter an integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            sum_k += number;
            i++;
        } while (i <= k);

        cout << "The total sum of " << k << " integers is: " << sum_k;
    }
    else {
        cout << "Invalid value";
    }

    return 0;
}
