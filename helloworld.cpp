#include <iostream>
#include <cmath>

int main (){

    double temp;
    char conversion;
    
    std::cout << "Enter the temp: "<< '\n';
    std::cin >> temp;

    std::cout << "Enter C to convert to Celcius and F to convert to Fahrenheit";
    std::cin >> conversion;

    switch (conversion){
        case 'C':
        double Celcius = (temp*9/5)+32;
        std::cout<<Celcius;
        break;

        case 'F':
        double Fahrenheit = (temp-32)*5/9;
        std::cout<<Fahrenheit;
        break;

        default: 
        std::cout<< "Please choose between C or F";
    }
}