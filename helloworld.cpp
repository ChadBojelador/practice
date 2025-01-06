#include <iostream>
#include <cmath>

int main(){

    char op;
    double num1;
    double num2;
    double answer;

    std:: cout <<"enter first number"<<'\n';
    std::cin>>num1;

    std:: cout <<"enter operation"<<'\n';
    std::cin>>op;

    std:: cout <<"enter second number"<<'\n';
    std::cin>>num2;

    if (op == '+') {
        answer = num1 + num2;
    }

    else if (op == '-') {
        answer = num1 - num2;
    }
    else if (op == '/') {
        answer = num1 / num2;
    }    
    else if (op == '*') {
        answer = num1 * num2;
    }

    else{
        std::cout<< "its not a valid operation"<< '\n';
    }

    std::cout<< "The answer is "<<answer<<'\n';
}