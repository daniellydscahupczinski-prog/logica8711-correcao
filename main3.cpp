#include<iostream>


int main(){

  std::cout<<"Numeros pares de 1 até 20: "<<std::endl;

  for(int i = 2; i <= 20; i+=2){
    std::cout<<i<<" "<<std::endl;
  }
  return 0;
}