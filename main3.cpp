#include<iostream> 

int main(){

  int numero;
  int soma = 0;

  while(true){
    std::cout<<"Digite um numero para somar(0 para parar)";
    std::cin>>numero;
  
  if(numero ==0){
    break;
  }

  if (numero < 0){
    std::cout<<"O numero não pode ser negativo, tente outra vez"<<std::endl;
  }
  soma = soma + numero;
  }
  std::cout<<"Soma :"<<soma<<std::endl;

  return 0;
}