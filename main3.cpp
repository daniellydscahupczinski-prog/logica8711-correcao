#include <iostream>
#include <string>

struct Loja {
    int id;
    float preco;
    std::string produto;
    bool emEstoque;
};

Loja produtos[50];
int totalProdutos = 0;

void adicionar() {
    std::cout << "-- Adicionar produto: " << std::endl;

    std::cout << "ID: ";
    std::cin >> produtos[totalProdutos].id;

    std::cout << "Preco: ";
    std::cin >> produtos[totalProdutos].preco;

    std::cin.ignore();

    std::cout << "Produto: ";
    std::getline(std::cin, produtos[totalProdutos].produto);

    produtos[totalProdutos].emEstoque = true;

    totalProdutos++;

    std::cout << "Produto cadastrado" << std::endl;
}




void exibir() {
    if (totalProdutos == 0) {
        std::cout << "Nenhum produto" << std::endl;
        return;
    }

    std::cout << "-- produtos -- " << std::endl;

    for (int i = 0; i < totalProdutos; i++) {
        std::string status = produtos[i].emEstoque ? "S" : "N";

        std::cout << "[" << status << "] "
                  << produtos[i].id << " - "
                  << produtos[i].preco << " - "
                  << produtos[i].produto << std::endl;
    }

}
void deletarPrduto(){
    int Loja

    std::cout<<"Digite o ID para deletar: ";
    std::cin>>Loja;

    for(int i = o; i < totalProdutos; i++){
        if(produtos[i].id == Loja){
            for(int j = i; j < totalProdutos - 1; j++){
                produtos[j] = produtos [j + 1];
            }
            totalProdutos--;
            std::cout<<"Produto deletado com sucesso"<<std::endl;
            return;
        }
    }
    }
void menu() {
    std::cout << "\n === TODOS LIST ===" << std::endl;
    std::cout << "1. Adicionar" << std::endl;
    std::cout << "2. Exibir" << std::endl;
    std::cout << "3. Sair " << std::endl;
}


int main() {

    int opcao;

    while (true) {
        menu();
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionar();
                break;

            case 2:
                exibir();
                break;

            case 3:
                deletarProduto();
                break;

            case 4:
                return 0;

            default:
                std::cout << "Opcao invalida" << std::endl;
        }
    }

    return 0;
}