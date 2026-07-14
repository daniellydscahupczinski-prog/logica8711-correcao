#include<iostream>
#include<cmath>


  int calcularCubo(int num){
    return static_cast<int>(std::pow(num, 3)); //pow eleva o que voce eleva, no caso o numero que voce coloca ali
  }

  int main(){

    int a;

    std::cout<<"DIgite um numero inteiro: ";
    std::cin>>a;

    int cubo = calcularCubo(a);

    std::cout<<"O cubo de"<<a<<" é: "<<cubo<<std::endl;
  

  return 0;
}