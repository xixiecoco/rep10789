#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Declaração das variáveis para armazenar as notas
    double nota1, nota2, nota3, nota4;

    // Solicita ao utilizador que insira as 4 notas
    std::cout << "Por favor, insira a primeira nota: ";
    std::cin >> nota1;

    std::cout << "Por favor, insira a segunda nota: ";
    std::cin >> nota2;

    std::cout << "Por favor, insira a terceira nota: ";
    std::cin >> nota3;

    std::cout << "Por favor, insira a quarta nota: ";
    std::cin >> nota4;

    // Calcula a média das notas
    double media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Exibe as notas e a média
    std::cout << "As notas inseridas são: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << std::endl;
    std::cout << "A media das notas: " << media << std::endl;

    return 0;
}
