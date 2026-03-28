#include<iostream>
#include<string>

int main (){

  std::string nome;
  int idade;
  float altura;

  std::cout<<"Qual seu nome: "<<std::endl;
  std::cin>>nome;
  std::cout<<"Qual sua idade: "<<std::endl;
  std::cin>>idade;
  std::cout<<"Qual sua altura: "<<std::endl;
  std::cin>>altura;

  std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
  std::cout<<"Voce tem "<<idade<<" anos"<<std::endl;
  std::cout<<"Voce tem "<<altura<< " metros"<<std::endl;



    return 0;
}