#include <iostream>
#include <cmath>

int main(){

    int temp;

    std::cout << "Enter the temperature";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
       std::cout<<"The temp is good"; /* code */
    }
    else{
        std::cout<<"The temp is bad";
    }
}   