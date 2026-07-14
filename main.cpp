
// 1. Ler e exibir
// Crie um programa que leia 5 números e exiba-os na tela.

// 2. Soma simples
// Leia 5 números e calcule a soma total.

// 3. Encontrar maior
// Leia 5 números e encontre o maior deles.

// 4. Encontrar menor
// Leia 5 números e encontre o menor deles.

// 5. Calcular média
// Leia 5 números, calcule a média e exiba.

// 6. Contar elementos
// Leia um array com 10 números e exiba quantos elementos tem.

// 7. Exibir pares
// Leia 10 números e exiba apenas os pares.

// 8. Exibir ímpares
// Leia 10 números e exiba apenas os ímpares.

// 9. Inverter array
// Leia 5 números e exiba-os em ordem inversa.

// 10. Contar ocorrências
// Leia 10 números e conte quantas vezes aparece o número 5.

// 11. Buscar elemento
// Leia 10 números e procure por um número específico. Se encontrar, exiba a posição.

// 12. Números acima da média
// Leia 8 números, calcule a média e exiba quais estão acima dela.

// 13. Maior e menor
// Leia 10 números e encontre tanto o maior quanto o menor em um mesmo programa.

// 14. Soma de pares
// Leia 10 números e some apenas os números pares.

// 15. Contar positivos e negativos
// Leia 10 números e conte quantos são positivos e quantos são negativos.

#include<iostream>

int main(){
     int numeros[] = {10,20,30,40,50};
    int tamanho = 5;

    std::cout<<"Exibiçao dos numeros"<<std::endl;
    for(int i = 0; i < tamanho; i++){
        std::cout<<numeros[i]<<std::endl;
        
    }
    return 0;
}

#include<iostream>

    int main(){

        int numeros[5];
        int soma = 0;

        std::cout<<"==== 2. Soma simples ===="<<std::endl;

        for(int i = 0; i < 5; i++){
            std::cout<<"Digite o numero "<<( i + 1)<<":";
            std::cin>>numeros[i];
            soma += numeros[i];
        }

        std::cout<<std::endl;
        std::cout<<"Soma total: "<<soma<<std::endl;
        return 0;
    }

#include<iostream>
    int encontrarMaior(int* arr, int tamanho){
        int maior = arr[0];

        for(int i = 0; i < tamanho; i++){
            if(arr[i] > maior ){
                maior = arr[i];
            }
        }
        return maior;
    }
    int main(){
        int arr[] = {2, 4, 6, 8, 10};
        std::cout<<"Maior numero: "<<encontrarMaior(arr, 5)<<std::endl;
    }

//ex 4
#include<iostream>
int encontrarMenor(int* arr, int tamanho ){
    int Menor = arr[0];

    for(int i = 0; i < tamanho; i++){
        if(arr[i] < Menor){
            Menor = arr[i]
        }
    }
    return menor;
}
    int main(){
        int arr[] = {2, 4, 6, 8, 10};
        std::cout<<"Menor numero: "<<encontrarMenor(arr, 5)<<std::endl;
    }

//ex5
#include<iostream>
int main(){
    int numero;
    int soma = 0;

    for(int i = 0; i < 5; i++){

        std::cout<<"Digite um numero: "<<std::endl;
        std::cin>>numero;

    soma = soma + numero;
    }
    int media = soma / 5;   
    std::cout<<"A media dos numeros é de:"<<media<<std::endl;}

//ex6
#include<iostream>
    int main(){
        int numeros = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        int tamanho = 10;

        for(int i = 0; i < 10; i++){

           
        }
    }

