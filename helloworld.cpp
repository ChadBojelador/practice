#include <iostream>

int main (){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline (std::cin, name);

    if (name.empty())
    {
        std::cout << "you diddnt enter your name";
    }
    else
    
}