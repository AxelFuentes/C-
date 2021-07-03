#include <iostream>
#include <stdlib.h>
//Llamamos a la clase
#include "Suma.h"

using namespace std;

int main(void)
{
    //Creacion del objeto A
    Suma A;
    int resultado;
    //Procedimiento (pide, calcula, muestra)
    A.PideAlUsuarioTusDatos();
    cout<<endl;
    A.MuestraTusDatos();
    cout<<endl;
    resultado=A.Sumatoria();
    cout<<"Resultado ="<<resultado;
    cout<<endl;

    system("pause");
    system("cls");

    //Procedimiento cuando envias valores
        //Cuando lo envias a la clase
    A.SumaMod(5,6);
    A.MuestraTusDatos();
    cout<<endl;
    resultado=A.Sumatoria();
    cout<<"Resultado ="<<resultado;
    cout<<endl;

    system("pause");
    system("cls");

        //Cuando modificas los valores
    int numero1,numero2;
    //Muestra los valores anteriores que son 5 y 6
    A.MuestraTusDatos();
    cout<<endl;
    cout<<"Modifica numero 1 = ";
    cin>>numero1;
    cout<<"Modifica numero 2= ";
    cin>>numero2;
    cout<<endl;

    A.ModificaNumero1(numero1);
    A.ModificaNumero2(numero2);
    cout<<endl;

    A.MuestraTusDatos();
    cout<<endl;

    resultado=A.Sumatoria();
    cout<<"Resultado ="<<resultado;
    cout<<endl;

    return 0;
}
