#include<iostream>


int main (){
  int idade;

  std::cout<<"Digite a sua idade: "<<std::endl;
  std::cin>>idade;

  if(idade < 0 ){
      std::cout<<"Idade invalida!"<<std::endl;
  }else if(idade <= 2){
    //else if = se não se
      std::cout<<"Voce é um bebe!"<<std::endl;
  }else if(idade <= 8){
      std::cout<<"Voce é uma criança!"<<std::endl;
  }else if(idade <= 16){
      std::cout<<"Voce é um(a) adolecente!"<<std::endl;
  }else if(idade <= 60){
        std::cout<<"Voce é um adulto(a)!"<<std::endl;
  }else{
      std::cout<<"Voce é um(a) senior!"<<std::endl;
  }
  
    return 0;
}