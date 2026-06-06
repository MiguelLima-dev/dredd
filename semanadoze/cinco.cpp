#include <iostream>
#include <cmath>
using namespace std;

struct circulo {
    float raio;
};

struct retangulo{
    float comprimento;
    float largura;
};

struct triangulo{
    float a;
    float b;
    float c;
};

struct figura {
    char tipo;
    circulo cir;
    retangulo ret;
    triangulo tri;
};

int main(){
    figura* figs = new figura[5];
    for (int i = 0; i < 5; i++){
        cin >> figs[i].tipo;
        if (figs[i].tipo == 'C') 
            cin >> figs[i].cir.raio;
        else if (figs[i].tipo == 'R')
            cin >> figs[i].ret.comprimento >> figs[i].ret.largura;
        else if (figs[i].tipo == 'T')  
            cin >> figs[i].tri.a >> figs[i].tri.b >> figs[i].tri.c;
    }

    for (int i = 0; i < 5; i++) {
        if (figs[i].tipo == 'C') {
            float area = M_PI * pow(figs[i].cir.raio, 2);
            float perimetro = 2 * M_PI * figs[i].cir.raio;
            cout << "Circulo " << perimetro << " " << area << endl;
        }
        else if (figs[i].tipo == 'R') {
            float area = figs[i].ret.comprimento * figs[i].ret.largura;
            float perimetro = 2 * figs[i].ret.comprimento + 2 * figs[i].ret.largura;
            cout << "Retangulo " << perimetro << " " << area << endl;
        }
        else if (figs[i].tipo == 'T') {
            float p = (figs[i].tri.a + figs[i].tri.b + figs[i].tri.c) / 2;
            float area = sqrt(p*(p-figs[i].tri.a)*(p-figs[i].tri.b)*(p-figs[i].tri.c));
            float perimetro = figs[i].tri.a + figs[i].tri.b + figs[i].tri.c;
            cout << "Triangulo " << perimetro << " " << area << endl;
        }
    }

    delete[] figs;
    return 0;
}