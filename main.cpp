#include<iostream>
#include<string>

struct pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){

    pessoa p1 = {"Junior", 20, 1.80};
    pessoa p2 = {"Carlos", 30, 1.70};

    std::cout<<p1.nome<<" tem "<<p1.idade<<" anos "<<" e mede "<<p1.altura<<"m"<<std::endl;

    return 0;
}
