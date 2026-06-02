#include <iostream>
#include <string>
#include <iomanip>

int choice;
int opçao;

std::string nomeResponsavel, nomeMae;
std::string telefones;
std::string endereçoCompleto, cep;
std::string rg;
std::string cpf;
std::string email;
std::string dataNascimento;
std::string nomeCompleto;
int idade;
float desconto;
int opçaoPagamento;
float valorCurso;
int parcelas;

void cadastro()
{
    std::cout << "Antes de finalizarmos, preciso de algumas informaçoes, por favor digite abaixo" << std::endl;

    std::cout << "Digite seu nome completo" << std::endl;
    std::getline(std::cin, nomeCompleto);

    std::cout << "Digite sua idade" << std::endl;
    std::cin >> idade;

    std::cin.ignore();

    std::cout << "Digite seu rg" << std::endl;
    std::getline(std::cin, rg);

    std::cout << "Digite seu cpf" << std::endl;
    std::getline(std::cin, cpf);

    std::cout << "Digite sua data de nascimento" << std::endl;
    std::getline(std::cin, dataNascimento);

    std::cout << "Digite o nome da sua mae" << std::endl;
    std::getline(std::cin, nomeMae);

    std::cout << "Digite seu numero para contato" << std::endl;
    std::getline(std::cin, telefones);

    std::cout << "Digite seu email" << std::endl;
    std::getline(std::cin, email);
}

int main()
{
    std::cout << "---- Cursos do Senac ---- " << std::endl;

    std::cout << "Voce deseja fazer o curso EAD ou Presencial?" << std::endl;
    std::cout << "Digite 1 se deseja fazer o curso em EAD" << std::endl;
    std::cout << "Digite 2 se deseja fazer Presencial" << std::endl;
    std::cin >> opçao;

    if (opçao == 1)
    {
        std::cout << "Temos os seguintes cursos em EAD" << std::endl;
        std::cout << "RH, Logistica, Contabilidade e Transações Imobiliarias" << std::endl;

        std::cout << "Digite 1 para RH" << std::endl;
        std::cout << "Digite 2 para Logistica" << std::endl;
        std::cout << "Digite 3 para Contabilidade" << std::endl;
        std::cout << "Digite 4 para Transações Imobiliarias" << std::endl;

        std::cin >> opçao;

        switch (opçao)
        {
        case 1:
            valorCurso = 3555.00;
            parcelas = 22;
            std::cout << "O valor do curso de RH e de R$3.555,00 em ate 22x" << std::endl;
            break;

        case 2:
            valorCurso = 3751.00;
            parcelas = 22;
            std::cout << "O valor do curso de Logistica e de R$3.751,00 em ate 22x" << std::endl;
            break;

        case 3:
            valorCurso = 3355.00;
            parcelas = 22;
            std::cout << "O valor do curso de Contabilidade e de R$3.355,00 em ate 22x" << std::endl;
            break;

        case 4:
            valorCurso = 3157.00;
            parcelas = 22;
            std::cout << "O valor do curso de Transações Imobiliarias e de R$3.157,00 em ate 22x" << std::endl;
            break;

        default:
            std::cout << "Numero invalido" << std::endl;
        }
    }

    else if (opçao == 2)
    {
        std::cout << "Temos os seguintes cursos Presenciais" << std::endl;
        std::cout << "TDS, Tecnico em Enfermagem e Tecnico em Modelagem" << std::endl;

        std::cout << "Digite 1 para TDS" << std::endl;
        std::cout << "Digite 2 para Tecnico em Enfermagem" << std::endl;
        std::cout << "Digite 3 para Tecnico em Modelagem" << std::endl;

        std::cin >> opçao;

        switch (opçao)
        {
        case 1:
            valorCurso = 14405.49;
            parcelas = 30;
            std::cout << "O valor do curso de TDS e de R$14.405,49 em ate 30x" << std::endl;
            break;

        case 2:
            valorCurso = 15279.00;
            parcelas = 40;
            std::cout << "O valor do curso de Tecnico em Enfermagem e de R$15.279,00 em ate 40x" << std::endl;
            break;

        case 3:
            valorCurso = 14844.79;
            parcelas = 28;
            std::cout << "O valor do curso de Tecnico em Modelagem e de R$14.844,79 em ate 28x" << std::endl;
            break;

        default:
            std::cout << "Numero invalido" << std::endl;
        }
    }

    else
    {
        std::cout << "Opçao invalida" << std::endl;
    }

    std::cout << " --- Escolha o metodo de pagamento --- " << std::endl;
    std::cout << "A vista tem 10 porcento de desconto e no credito 6 porcento" << std::endl;

    std::cout << "---1 Boleto" << std::endl;
    std::cout << "---2 Cartao de credito" << std::endl;
    std::cout << "---3 Pix" << std::endl;
    std::cout << "---4 Dinheiro" << std::endl;
    std::cout << "---5 Debito" << std::endl;

    std::cin >> opçaoPagamento;

    if (opçaoPagamento == 3 || opçaoPagamento == 4 || opçaoPagamento == 5)
    {
        desconto = valorCurso * 0.90;

        std::cout << "O valor total com desconto e de R$"
                  << desconto << std::endl;
    }

    else if (opçaoPagamento == 2)
    {
        desconto = valorCurso * 0.94;

        std::cout << "O valor total com desconto e de R$"
                  << desconto << std::endl;
    }

    else if (opçaoPagamento == 1)
    {
        std::cout << "O valor total e de R$"
        << valorCurso
        << " em ate "
                  << parcelas
                  << "x"
                  << std::endl;
    }

    else
    {
        std::cout << "Opçao de pagamento invalida" << std::endl;
    }

   std::cin.ignore();

    cadastro();

    return 0;
}