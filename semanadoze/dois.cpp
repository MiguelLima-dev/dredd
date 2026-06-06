#include <iostream>

struct data {
    int dia;
    int mes;
    int ano;
};

struct pessoa {
    std::string nome;
    data nasc;
};

int main(){
    int n;
    std::cin >> n;
    pessoa* vetor = new pessoa[n];
    for (int i = 0; i < n; i++)
        std::cin >> vetor[i].nome >> vetor[i].nasc.dia >>
        vetor[i].nasc.mes >> vetor[i].nasc.ano;
    
    int maisVelho = 0;
    for (int i = 1; i < n; i++) {
        data a = vetor[i].nasc;
        data b = vetor[maisVelho].nasc;

        if ((a.ano < b.ano) || (a.ano == b.ano && a.mes < b.mes) ||
        (a.ano == b.ano && a.mes == b.mes && a.dia < b.dia))
            maisVelho = i;
    }

    std::cout << vetor[maisVelho].nome << "\n";
    delete[] vetor;
    return 0;
}