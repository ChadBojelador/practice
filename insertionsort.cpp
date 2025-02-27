#include <iostream>

using namespace std;

int main (){

    int array [] = { 5, 4, 3, 2, 1};
    int size = sizeof(array)/sizeof(array[0]);


        for ( int i = 0; i < size; i++){
            int minIndex = i;

            for (int j = i; j < size ; j++)
            {
                if (array[j]<array[minIndex])
                {
                    int temp = array[j];
                    array[j] =  array[minIndex];
                    array[minIndex] = temp;
                    
                }
                
            }
            
                
            }

            for ( int i = 0; i < size; i++){
                cout<<array[i];
            }
     return 0;
}