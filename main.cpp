#include<iostream>

struct Aposta{
    std::string time;
    int valor;
    int odd;
};

int main(){
    std::cout<<"==== CALCULADORA DE APOSTAS ===="<<Std::endl;
    std::cout<<std::endl;

    Aposta aposta;

    std::cout<<"Time: ";
    std::cin>>aposta.time;

    std::cout<<"Valor da aposta (R$): ";
    std::cin>>aposta.valor;

    std::cout<<"odd (multiplicador)";
    std::cin>>aposta.odd;

    int ganho = aposta.valor * aposta.odd;
    int lucro = ganho - aposta.valor;

    std::cout<<std::endl;
    std::cout<<"==== RESULTADO ===="<<std::endl;
    std::cout<<"Voce apostou R$ "<<aposta.valor<<" em "<<aposta.time<<std::endl;
    std::cout<<"Se acertar, voce ganha: R$ "<<ganho<<std::endl;
    std::cout<<"Lucro: R$ "<<lucro<<std::endl;

}