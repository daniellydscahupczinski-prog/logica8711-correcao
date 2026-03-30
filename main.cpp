#include<iostream>

int main (){
  
int a;
int b;
//int a, b;

  std::cout<<"Digite um valor para A: "<<std::endl;
  std::cin>>a;

  std::cout<<"Digite um valor para B: "<<std::endl;
  std::cin>>b;

  std::cout<<(a > b)<<std::endl;
  //maior que...
  std::cout<<(a >= b)<<std::endl;
  //maior ou igual a...
  std::cout<<( a != b)<<std::endl;
  //diferente de...
  std::cout<<(a ==b)<<std::endl;
  //igual a...
    return 0;
}