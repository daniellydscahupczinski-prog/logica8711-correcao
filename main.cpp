#include <iostream>
#include <string>

int main(){

    //brlAmount valor em reais | exchangeRate: Taxa de Cambio | usdAmount: Valor em dolares
    
    double brlAmount, exchangeRate, usdAmount;
    int choice; //escolha

    std::cout<<" ---- Currency Convert: BRL to USD -----"<<std::endl;

    //Entrada da taxa de cambio (quanto vale 1 dolar hoje)
    std::cout<<"Enter the current exchange rate (how much is 1 dollar in reais?): "<<std::endl;
    std::cin>>exchangeRate;

    //Entrada da quantia em Reias que a pessoa deseja converter
    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>brlAmount;

    //verificação lógica: garante que o valor informado seja positivo 
    if(brlAmount > 0){
        //calculo: divide o montante em reais pela taxa de cambio
        usdAmount = brlAmount / exchangeRate;
        std::cout<<"You will have $ "<<usdAmount<<" US Dollars. "<<std::endl;
    }else{
        //Mensagem de erro caso o valor seja zero ou negativo
        std::cout<<"Error: please enter a valid amount greater than zero."<<std::endl;

    }
    
    return 0;
}