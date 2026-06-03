#include<iostream>
#include<string>

struct pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){

    pessoa p1;

    p1.nome = "Danielly";
    p1.idade = 16;
    p1.altura = 1.67;

    std::cout<<"Nome: "<<p1.nome<<std::endl;
    std::cout<<"Idade: "<<p1.idade<<std::endl;
    std::cout<<"Altura: "<<p1.altura<<std::endl;

    return 0;
}
