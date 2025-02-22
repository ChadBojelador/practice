#include <iostream>

using namespace std;

int main() {
    int length;
    char choice;
    int count = 0;

    cout << "Enter the size of the array: ";
    cin >> length;

    int array[length];


    for (int i = 0; i < length; i++) {
        cout << "Enter the element of the array[" << i << "]: ";
        cin >> array[i];
    }


    cout << "Choose a number to execute:" << '\n';
    cout << "1. Print the LARGEST element" << '\n';
    cout << "2. Print the SUM of all the array elements" << '\n';
    cout << "3. Display the number of multiples of five" << '\n';
    cout << "4. Display all elements" << '\n';
    cout << "5. Display all" << '\n';
    cin >> choice;

    int largest = array[0];
    int sum = 0;

    switch (choice) {
        case '1': {
         
            for (int i = 1; i < length; i++) {
                if (array[i] > largest) {
                    largest = array[i];
                }
            }
            cout << "The largest element is: " << largest << endl;
            break;
        }
        case '2': {
         
         
            for (int i = 0; i < length; i++) {
                sum += array[i];
            }
            cout << "The sum of all elements is: " << sum << endl;
            break;
        }
        case '3': {
       
            for (int i = 0; i < length; i++) {
                if (array[i] % 5 == 0) {
                    count++;
                }
            }
            cout << "The number of multiples of five is: " << count << endl;
            break;
        }
        case '4': {
         
            cout << "Array elements are: ";
            for (int i = 0; i < length; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
            break;
        }

        case '5':{
            for (int i = 1; i < length; i++) {
                if (array[i] > largest) {
                    largest = array[i];
                }
            }
            cout << "The largest element is: " << largest << endl;
            for (int i = 0; i < length; i++) {
                sum += array[i];
            }
            cout << "The sum of all elements is: " << sum << endl;
      
            for (int i = 0; i < length; i++) {
                if (array[i] % 5 == 0) {
                    count++;
                }
            }
            cout << "The number of multiples of five is: " << count << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
