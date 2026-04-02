#include<iostream>


int main (){

  int num1, num2, soma;

  std::cout<<"Digite num 1: "<<"\n";
  std::cin>>num1;

  std::cout<<"Digite num 2: "<<"\n";
  std::cin>>num2;

  soma = num1 + num2;

  std::cout<<"\n O resultado da soma é "<<soma<<"\n";

  // "\n" serve para dar enter, igual ao endl, porem ocupando menos espaço
  
    return 0;
}