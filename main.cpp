#include<iostream>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }

    tabuada(numero, multiplicador - 1);

    std::cout<<numero<<"X"<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;
}

    int main(){
        int numero;
        int multiplicador;

        std::cout<<"digite um numero: "<<std::endl;
        std::cin>>numero;

        std::cout<<"Digite o numero Multiplicador: "<<std::endl;
        std::cin>>multiplicador;

       tabuada(numero, multiplicador);

        return 0;
    }
     