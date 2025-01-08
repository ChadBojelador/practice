#include <iostream>
#include <cmath>

int main(){

    int temp;
    bool sunny = true;


    std::cout << "Enter the temperature";
    std::cin >> temp;

    if (temp <= 0 || temp >= 30)
    {
       std::cout<<"The temp is bad"; /* code */
    }
    else{
        std::cout<<"The temp is good";
    }

    if (!sunny)
    {
        std::cout << "it is not sunny";
    }
    else{
        std::cout << "it is sunny";
    }
    
}   