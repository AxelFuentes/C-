#ifndef SUMA_H
#define SUMA_H

#include <iostream>
#include <stdlib.h>

using namespace std;

class Suma{
private:
    int numero1, numero2;
public:
    Suma(void);
    ~Suma(void);
    SumaMod(int numero1,int numero2);
    int DameNumero1(void);
    int DameNumero2(void);
    void ModificaNumero1(int numero1);
    void ModificaNumero2(int numero2);
    void PideAlUsuarioTusDatos(void);
    int Sumatoria(void);
    void MuestraTusDatos(void);

};

#endif // SUMA_H
