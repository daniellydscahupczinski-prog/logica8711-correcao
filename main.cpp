#include<iostream>

    int quadrado(int n){
        return n * n;
    }

    int cubo(int n){
        return n * n * n ;
    }
int main(){

    std::cout<<"Quadrado de 5: "<<quadrado(5)<<std::endl;
    std::cout<<"Quadrado de 8: "<<quadrado(8)<<std::endl;
    std::cout<<"Quadrado de 10: "<<quadrado(10)<<std::endl;

    std::cout<<"Cubo de 5: "<<cubo(5)<<std::endl;
    std::cout<<"Cubo de 7:  "<<cubo(7)<<std::endl;
    std::cout<<"Cubo de 13: "<<cubo(13)<<std::endl;

    return 0;
}
    