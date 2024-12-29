#include <iostream>
#include <cmath>

int main ()
{

    int age;

    std::cout << "Enter your age:";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You are an adult";
    }
    
    else if (age < 0)
    {
        std::cout << "It is not a valid age";
    }
    
    else
    {
        std::cout << "You are not allowed to enter";
    }

    return 0;
}