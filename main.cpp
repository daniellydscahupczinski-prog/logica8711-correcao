#include<iostream>
#include<string>


int main (){
 

std::string nome;
float altura;
int idade;

std::cout<<"Digite seu nome"<<std::endl;
std::cin>>nome;


std::cout<<"Digite sua altura"<<std::endl;
std::cin>>altura;

std::cout<<"Digite sua idade"<<std::endl;
std::cin>>idade;


if(idade <= 10)
{std::cout<<"voce se encontra na classificaçao infantil"<<idade<<std::endl;
}else if (idade <= 18)

{std::cout<<"voce se encontra na classificaçao adolecente"<<idade<<std::endl;
}else if(idade <= 60)

{std::cout<<"Voce se encontra na classificaçao adulta"<<idade<<std::endl;
}else{
  std::cout<<"Voce se encontra na classificaçao senior!"<<std::endl;
}
  return 0;

  }