#include<iostream>
#include<string>

struct Jogador{
    std::string nome;
    int cartoesAmarelo;
    int cartoesVermelho;
};

int main(){
    std::cout<<" ===== REGISTRO DE CARTOES ===="<<std::endl;
    std::cout<<std::endl;

    Jogador jogador;

    std::cout<<"Nome do jogador: ";
    std::cin>>jogador.nome;

    std::cout<<"Cartoes amarelos: "<<std::endl;
    std::cin>>jogador.cartoesAmarelo;

    std::cout<<"Cartoes vermelhos: "<<std::endl;
    std::cin>>jogador.cartoesVermelho;

    std::cout<<std::endl;
    std::cout<<"==== SITUAÇÃO ===="<<std::endl;

    if(jogador.cartoesVermelho > 0){
        std::cout<<jogador.nome<<"foi expulso!"<<std::endl;
    }else if(jogador.cartoesAmarelo >= 2){
        std::cout<<jogador.cartoesAmarelo<<" Recebeu 2 amarelos e foi expulso"<<std::endl;
    }else if(jogador.cartoesAmarelo ==1){
        std::cout<<jogador.nome<<" Recebeu 1 amarelo. Cuidado!"<<std::endl;
    }else{
        std::cout<<jogador.nome<<" Esta limpo!"<<std::endl;
    }

}