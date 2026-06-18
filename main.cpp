#include<iostream>
#include<string>

struct Convocados{
    std:: string nome, posicao;
    int numero;

};
int main(){
Convocados convocados[3];

std::cout<<"==== CONVOCAÇAO DA SELEÇAO ===="<<std::endl;
std::cout<<std::endl;

for(int i = 0; i < 3; i++){
    std::cout<<"Jogador "<<(i + 1)<<": "<<std::endl;
    std::cout<<"Nome: ";
    std::cin>>convocados[i].nome;
    std::cout<<"Numero: ";
    std::cin>>convocados[i].numero;
    std::cout<<"Posicao: ";
    std::cin>>convocados[i].posicao;
}

std::cout<<" ==== LISTA DE CONVOCADOS ====="<<std::endl;
std::cout<<std::endl;

for(int i = 0; i < 3; i++){
    std::cout<<convocados[i].numero<<" - "<<convocados[i].nome<<" ("<<convocados[i].posicao<<")"<<std::endl;
}
return 0;
}

