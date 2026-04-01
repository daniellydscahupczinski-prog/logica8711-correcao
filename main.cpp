#include<iostream>
#include<string>

int main (){

  std::string nome;
  int idade;
  int anoAtual = 2026;
  int result;
  
  std::cout<<"Qual seu nome?"<<std::endl;
  std::cin>>nome;
  std::cout<<"Qual sua idade?"<<std::endl;
  std::cin>>idade;
  result = anoAtual - idade;
  std::cout<<result<<std::endl;

  std::cout<<"Boa noite "<<nome<<"!!"<<std::endl;
  std::cout<<"Voce tem "<<idade<<"anos"<<std::endl;
  std::cout<<"E seu ano de Nascimento e "<<result;
    return 0;
}