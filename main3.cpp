#include<iostream>
#include<cmath>

int main(){

  const double pi = 3.14; //const quer dizer que o valor nao vai mudar

  double area;
  int raio;
  std::cout<<"Digite o valor do raio do circulo"<<std::endl;
  std::cin>>raio;

  area = pi * (raio * raio);
  std::cout<<"A area do circulo é"<<area<<std::endl;

  return 0;

}
  
