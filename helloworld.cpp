#include <iostream>
#include <cmath>

int main (){

    double temp;
    char conversion;
    double Celcius = (temp*9/5)+32;
    double Fahrenheit = (temp-32)*5/9;

    std::cout << "Enter the temp: "<< '\n';
    std::cin >> temp;

    std::cout << "Enter C to convert to Celcius and F to convert to Fahrenheit";
    std::cin >> conversion;

    switch (conversion){
        case 'C':
        Celcius;
        break;
        case 'F':
        Fahrenheit;
        break;
    }
}