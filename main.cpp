#include<iostream>

int main(){

    int numeros[] = {1,2,3,2,4,5,3,6};
    int tamanho = 8;

    std::cout<<"==== NUMEROS DUPLICADOS ==== "<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Array: ";
    for(int i = 0; i < tamanho; i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Numeros duplicados: "<<std::endl;
    for(int i = 0; i < tamanho; i++){
        for(int j = i + 1; j < tamanho; j++){
            if(numeros[i] == numeros[j]){
                std::cout<<numeros[i]<<" Aparece mais de uma vez"<<std::endl;
                break;
            }
        }
    }
    return 0;
}