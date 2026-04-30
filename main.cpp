#include <iostream>
#include <string>

int main(){

    int opçao;
    std::string nome;
    int idade;

    std::cout<<"---- Escolha a opçao adequada "<<std::endl;
    std::cout<<"Digite 1 para cadastrar ou 2 para sair: "<<std::endl;
    std::cin>>opçao;

    if(opçao == 1){
        std::cout<<"Digite o nome: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite a idade:"<<std::endl;
        std::cin>>idade;

        std::cout<<"Seu nome é: "<<nome<<std::endl;
        std::cout<<"Sua idade é: "<<idade<<std::endl;

    }else{
        std::cout<<"Ate a proxima!"<<std::endl;
 }
    
    return 0;
}