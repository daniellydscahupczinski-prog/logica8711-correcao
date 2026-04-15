#include <iostream>

int main()
{

  int opcao;

  std::cout << "Digite um valor para opcao: " << std::endl;
  std::cin >> opcao;

  switch (opcao)
  {
  case 1:
    std::cout << "Domingo!" << std::endl;
    break;
  case 2:
    std::cout << "Segunda-feira" << std::endl;
    break;
  case 3:
    std::cout << "Terça-feira" << std::endl;
    break;
  case 4:
    std::cout << "Quarta-feira" << std::endl;
    break;
  case 5:
    std::cout << "Quinta-feira" << std::endl;
    break;
  case 6:
    std::cout << "Sexta-feira" << std::endl;
    break;
  case 7:
    std::cout << "sabado" << std::endl;
    break;

  default:
    std::cout << "numero invalido!" << std::endl;
  }

  return 0;
}