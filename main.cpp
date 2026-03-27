#include<iostream>
#include<iomanip>

int main (){

    int a = 8;
    //int número inteiro
    float b = 9.6;
    //float número de ponto flutuante ocupa 4bytes.
    double c = 8.6952132545;
    std::cout<<std::fixed<<std::setprecision(10)<<c<<std::endl;
    //double ocupa 8bytes.


    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;

    return 0;
}