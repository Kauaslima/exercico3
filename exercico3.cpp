#include <iostream>

using namespace std;

// Função para verificar qual número é maior
void verificarMaior(int num1, int num2) {
    if (num1 > num2)
        cout << "O primeiro número é maior" << endl;
    else if (num2 > num1)
        cout << "O segundo número é maior" << endl;
    else
        cout << "Os números são iguais" << endl;
}

// Função para verificar a quantidade de produtos no estoque
void verificarEstoque(int quantidade) {
    if (quantidade >= 100)
        cout << "Quantidade suficiente no estoque" << endl;
    else if (quantidade >= 50)
        cout << "Atenção ao estoque" << endl;
    else
        cout << "Faça um novo pedido e reabasteça o estoque" << endl;
}

// Função para verificar onde o número se encaixa
void verificarNumero(int numero) {
    if (numero > 0)
        cout << "O número é positivo" << endl;
    else if (numero < 0)
        cout << "O número é negativo" << endl;
    else
        cout << "O número é igual a zero" << endl;
}

int main() {
    int num1, num2, quantidade, numero;

    // Problema 1
    cout << "Informe dois números: ";
    cin >> num1 >> num2;
    verificarMaior(num1, num2);

    // Problema 2
    cout << "Informe a quantidade de produtos em estoque: ";
    cin >> quantidade;
    verificarEstoque(quantidade);

    // Problema 3
    cout << "Informe um número: ";
    cin >> numero;
    verificarNumero(numero);

    return 0;
}
