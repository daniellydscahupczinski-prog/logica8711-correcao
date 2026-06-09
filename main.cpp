#include<iostream>
#include<string>

struct Tarefa{
    int id; //numero identificador 
    std::string descricao; //texto da tarefa
    bool concluida; //true or false 
};

Tarefa tarefas[50];
int totalTarefas = 0;

void adicionar(){
    std::cout<<"\n --- Adicionar tarefas ----"<<std::endl;

    std::cout<<"ID: ";
    std::cin>>tarefas[totalTarefas].id;

    std::cin.ignore();
    std::cout<<"Descricao: ";
    std::getline(std::cin, tarefas[totalTarefas].descricao);

    tarefas[totalTarefas].concluida = false;

    totalTarefas++;
    std::cout<<"Tarefa adicionada"<<std::endl;
}

void listar(){
    if(totalTarefas == 0){
        std::cout<<"\n Nenhuma tarefa!"<<std::endl;
        return;
    }

    std::cout<<"\n --- tarefas ---- "<<std::endl;
    for(int i = 0; i < totalTarefas; i++){
        std::string status = tarefas[i].concluida ? "S": "N" ;
        std::cout<<"["<<status<<"]"<<tarefas[i].id<<" - "
        <<tarefas[i].descricao<<std::endl;
    }
}
void marcarConcluida(){
    int idBuscado;
    std::cout<<"\n ID da tarefa: ";
    std::cin>>idBuscado;

    for(int i = 0 ; i < totalTarefas; i++){
        if(tarefas[i].id == idBuscado){
            tarefas[i].concluida = true;
            std::cout<<"Marcada como concluida"<<std::endl;
            return;
        }
    }
    std::cout<<"Tareda nao encontrada!"<<std::endl;
}

void menu(){
    std::cout<<"\n === TODOS LIST ==="<<std::endl;
    std::cout<<"1. Adicionar"<<std::endl;
    std::cout<<"2. Listar "<<std::endl;
    std::cout<<"3. Marcar concluida"<<std::endl;
    std::cout<<"4. sair "<<std::endl;
    std::cout<<"Escolha: "<<std::endl;
}
int main (){

    int opcao;

    while (true){
        menu();
        std::cin>>opcao;

        switch(opcao){
            case 1:
                adicionar();
                break;
            
            case 2:
                listar();
                break;
            
            case 3:
                marcarConcluida();
                break;

            case 4:
                std::cout<<"Ate logo"<<std::endl;
                return 0;
            default:
                std::cout<<"Opcao invalida"<<std::endl;
        }
    }
    return 0;
}

