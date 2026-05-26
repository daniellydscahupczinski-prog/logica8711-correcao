#include<iostream>
#include<format>
#include<string>

int main(){

    std::string nome = "Danielly";

    std::string mensagem = std::format("ola, {}! Voce tem {} anos. \n", nome);
    std::cout<<mensagem;

    return 0;
 }

    