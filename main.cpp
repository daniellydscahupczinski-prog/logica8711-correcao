#include <iostream>
#include <string>
#include <iomanip>
#include <thread>

int main(){
    int choice;
    int opçao;
    std::string name;
    int idade;
    int opçao1;
    int opçao2;
    


    std::cout<<"---- Cursos do Senac ---- "<<std::endl;

    std::cout<<" Voce deseja fazer o curso EAD ou Presencial?"<<std::endl;
    std::cout<<" Digite 1 se deseja fazer o curso em EAD"<<std::endl;
    std::cout<<" Digite 2 se deseja fazer Presencial"<<std::endl;
    std::cin>>opçao;

    if (opçao ==1){
        std::cout<<" Temos os seguintes cursos em EAD"<<std::endl;
        std::cout<<" RH, Logistica, Contabilidade e Transações imobiliares"<<std::endl;
        std::cout<<" Digite 1 para RH, 2 para Logistica, 3 para Contabilidade ou 4 para Transações imobiliares"<<std::endl;
        std::cin>>opçao;
        
        switch (opçao){
            case 1:
            std::cout<<" O valor do curso de RH é de R$3.555,00 em até 22x"<<std::endl;
                break;
            
            case 2:
            std::cout<<" O valor do curso de Logistica é de R$3.751,00 em até 22x"<<std::endl;
                break;
            
            case 3:
            std::cout<<" O valor do curso de contabilidade é de R$3.355,00 em até 22x"<<std::endl;
                break;

            case 4:
            std::cout<<" O valor do curso de transações imobiliares é de R$3.157,00 em até 22x"<<std::endl;
                break;

            default:
            std::cout<<" Numero invalido"<<std::endl;
        }
    }else if (opçao ==2){
        std::cout<<" Temos os seguintes cursos Presenciais"<<std::endl;
        std::cout<<" TDS, Tecnico em Enfermagem e Tecnico em Modelagem"<<std::endl;
        std::cout<<" Digite 1 para TDS, 2 para Tecnico em Enfermagem ou 3 para Tecnico em Modelagem"<<std::endl;
        std::cin>>opçao;

    switch (opçao){
        case 1:
        std::cout<<" O valor do curso de TDS é de R$14.405,49 em até 30x"<<std::endl;
            break;

        case 2:
        std::cout<<" O valor do curso do Tecnico em Enfermagem é de R$15.279,00 em até 40x"<<std::endl;
            break;

        case 3:
        std::cout<<" O valor do curso do Tecnico em Modelagem é de R$14.844,79 em até 28x"<<std::endl;
            break;

        default:
        std::cout<<" Numero invalido "<<std::endl;

    }
        }
    
    return 0;
}