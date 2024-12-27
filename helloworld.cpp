#include <iostream>
#include <vector>



int main (){
    
    std::string name;
    int age;


    std::cout << "What's your age?:";
    std::cin >> age;

    std::cout << "What's your name?:";
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << "\n";
    std::cout << "I'm " << age;
    return 0;
}