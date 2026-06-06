#include <iostream>
using namespace std;

int main() {
    int difInicial, tempoPrimeiro, tempoSegundo, numVoltas;
    cin >> difInicial >> tempoPrimeiro >> tempoSegundo >> numVoltas;

    int ganho = tempoSegundo - tempoPrimeiro;

    // Se o primeiro não é mais rápido, nunca alcança
    if (ganho <= 0) {
        cout << -1;
        return 0;
    }

    // Diferença ao final da corrida
    int difFinal = difInicial + ganho * numVoltas;

    // Se nem ao final alcança uma volta, nunca vira retardatário
    if (difFinal < tempoSegundo) {
        cout << -1;
        return 0;
    }

    // Encontrar k mínimo tal que:
    // difInicial + ganho * k >= tempoSegundo
    // k = ceil((tempoSegundo - difInicial) / ganho)
    int num = tempoSegundo - difInicial;
    int k = (num + ganho - 1) / ganho; // ceil com inteiros

    // Volta em que se torna retardatário
    int volta = k + 1;

    // Quantidade de voltas como retardatário
    int qtd = numVoltas - volta + 1;

    cout << volta << endl;
    cout << qtd;

    return 0;
}
