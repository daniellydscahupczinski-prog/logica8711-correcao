#include<iostream>
#include<cmath>
#include<string>

int main (){
  std::string user;
  std::string senha;

  std::cout<<"Digite seu usuário de acesso: "<<std::endl;
  std::cin>>user;

  std::cout<<"Digite sua senha: "<<std::endl;
  std::cin>>senha;

  if(senha == "2891a007"){
    std::cout<<"O usuário "<<user<<" esta logado com sucesso!!"<<std::endl;
  }else{
    std::cout<<"Usuário ou senha inválidos!"<<std::endl;
  }

  
    return 0;
}