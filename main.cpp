#include<iostream>

int main(){

    int numero, sorteado = 42;

        do{
            std::cout<<"Adivinhe: ";
            std::cin>>numero;
            if(numero < sorteado) std::cout<<"Maior!"<<std::endl;
            else if(numero > sorteado)std::cout<<"Menor!"<<std::endl;
            }while(numero != sorteado);
            
        std::cout<<"Acertou!!"<<std::endl;

        return 0;
}