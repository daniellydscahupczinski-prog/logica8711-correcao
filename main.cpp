#include<iostream>

double saldo = 1000.0;
std::string titular = "Danielly";

void exibirSaldo(){
    std::cout<<titular<<" --- Saldo: R$ "<<saldo<<std::endl;
}

void depositar(double valor){
    if(valor > 0){
        saldo += valor;
        std::cout<<"Deposito realizado com sucesso"<<std::endl;
    }else{
        std::cout<<"Valor invalido"<<std::endl;
    }
}

void sacar(double valor){
    if(valor > 0 && valor <= saldo){
        saldo -= valor;
        std::cout<<"Saldo insuficiente ou valor inválido!"<<std::endl;
    }
}
void exibirMenu(){
    std::cout<<"\n === MENU CONTA BANCARIA === "<<std::endl;
    std::cout<<"1 - Ver saldo"<<std::endl;
    std::cout<<"2 -Deposito"<<std::endl;
    std::cout<<"3 - Sacar"<<std::endl;
    std::cout<<"4 - Sair"<<std::endl;
    std::cout<<"Digite uma opção ";
}

int main(){

    int opcao;
    double valor;

    do{
        exibirMenu();
        std::cin>>opcao;
        
        switch(opcao){
            case 1:
            exibirSaldo();
            break;
            case 2:
            std::cout<<"Digite o valor a depositar: "<<std::endl;
            std::cin>>valor;
            depositar(valor);
            break;
            case 3:
            std::cout<<"Digite o valor a sacar: ";
            std::cin>>valor;
            break;
            case 4:
            std::cout<<"Saindo da conta.."<<std::endl;
            break;
            default:
            std::cout<<"Opção invalida"<<std::endl;

        }

    }while(opcao != 4);

        return 0;
}