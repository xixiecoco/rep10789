#include <iostream>
#include <locale.h>

int main() {

    double nota1, nota2, nota3, nota4;

    std::cout << "Por favor, insira a nota do 1º teste: ";
    std::cin >> nota1;

    std::cout << "Por favor, insira a nota do 2º teste: ";
    std::cin >> nota2;

    std::cout << "Por favor, insira a nota do 3º teste: ";
    std::cin >> nota3;

    std::cout << "Por favor, insira a nota do 4º teste: ";
    std::cin >> nota4;

 
    double media = (nota1 * 0.5 + nota2 * 0.1 + nota3 * 0.1 + nota4 * 0.3);


    std::cout << "As notas inseridas são: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << std::endl;
    std::cout << "A média ponderada das notas: " << media << std::endl;

    return 0;
}

