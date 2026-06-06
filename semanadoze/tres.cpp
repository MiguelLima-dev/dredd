#include <iostream>

struct aluno {
    int matricula;
    std::string nome;
    float n1;
    float n2;
    char sexo;
};

int main(){
    int n;
    std::cin >> n;

    float geral = 0, masc = 0, fem = 0, m = 0, f = 0;
    aluno* vet = new aluno[n];
    for (int i = 0; i < n; i++) {
        std::cin >> vet[i].matricula >> vet[i].nome >>
        vet[i].n1 >> vet[i].n2 >> vet[i].sexo;
        geral += vet[i].n1 + vet[i].n2;
        
        if (vet[i].sexo == 'M') {
            masc += vet[i].n1 + vet[i].n2;
            m++;
        }
        else {
            fem += vet[i].n1 + vet[i].n2;
            f++;
        }
    }

    std::cout << geral / (2*(f + m)) << "\n" << masc / (2*m) << "\n" << fem / (2*f) << "\n";

    delete[] vet;
    return 0;
}