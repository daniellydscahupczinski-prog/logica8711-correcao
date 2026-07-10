#include<iostream>

int main(){
int numeros [] = {1,2,3,4,5};
std::cout<<"==== 5 numeros exibidos ===="<<std::endl;
for (int i = 0; i < 5; i++){
    std::cout<<numeros[i]<<std::endl;
}

std::string palavra [] = { "casa","sofa","teve","mesa","computador"};
std::cout<<"==== A ULTIMA PALAVRA É ====="<<std::endl;
std::cout<<palavra[4]<<std::endl;


    
return 0;
    
}