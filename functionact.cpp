#include <iostream>
using namespace std;

void bubbleSort();

int main(){

    int arr[] = {5,7,1,4,9};
    int length = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
       for (int j = 0; j < i ; j++)
       {
            int temp;
            arr[i]= arr[i+1];
            temp = arr[i+1];
            temp = arr[i];

        }

       }


    for (int i = 0; i < length; i++)
    {
        cout << arr[i];
    }
    

    return 0;
}