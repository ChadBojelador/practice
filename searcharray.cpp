#include<iostream>
using namespace std;


int searchArray(int array[], int size, int element);
int main (){

    int numbers[]={1,2,3,4,5,6,7,8};
    int index;
    int myNum=3;
    int size = sizeof(numbers)/sizeof(numbers[0]);


    index = searchArray(numbers, size, myNum);
    if (index!=-1)
    {
        cout<<index;
    }

    else{
        cout<<"not";
    }
    
    return 0;
}

int searchArray(int array[], int size, int element){

    for (int i = 0; i < size; i++)
    {
        if (element==array[i]){
            return i;
        }
       
        }
        return -1;
    }
