#include<iostream>

int main(){

    int num1, num2, soma, subt, mult;
    float div;

    std::cout<<"Digite aqui o valor para numero 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite aqui o valor para numero 2: "<<std::endl;
    std::cin>>num2;

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    std::cout<<"O resultado da soma é: "<<soma<<std::endl;
    std::cout<<"O resultado da substração é: "<<subt<<std::endl;
    std::cout<<"O resultado da multiplicação é: "<<subt<<std::endl;
    std::cout<<"O resultado da divisão é: "<<div<<std::endl;

    return 0;
}