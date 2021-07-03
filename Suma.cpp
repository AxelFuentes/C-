#include "Suma.h"

//Metodo constructor : Asigna valores iniciales a nuestras variables.
Suma::Suma(void){
    this->numero1=0;
    this->numero2=0;
}
//Metodo Destructor : Elimina la memoria ocupada por el ojeto.
Suma::~Suma(void){
    //cout<<"Objeto destruido...";
}
//Metodo por si el main envia valores.
Suma::SumaMod(int numero1,int numero2){
    this->numero1=numero1;
    this->numero2=numero2;
}
//Metodos que nos permiten tener un copia de los valores guardados.
int Suma::DameNumero1(void){
    return this->numero1;
}
int Suma::DameNumero2(void){
    return this->numero2;
}
//Metodos que modifican los valores gardados
void Suma::ModificaNumero1(int numero1){
    this->numero1=numero1;
}
void Suma::ModificaNumero2(int numero2){
    this->numero2=numero2;
}
//Metodo que pide los datos al usuario
void Suma::PideAlUsuarioTusDatos(void){
    cout<<"Dame mi numero 1= ";
    cin>>this->numero1;
    cout<<"Dame mi numero 2= ";
    cin>>this->numero2;
}
//Metodo que realiza la operacion
int Suma::Sumatoria(void){
    int resultado;
    resultado=this->numero1+this->numero2;
    return resultado;
}
//Metodo para mostrar los datos
void Suma::MuestraTusDatos(void){
    cout<<"Tu dato numero1 = "<<this->numero1<<endl;
    cout<<"Tu dato numero2 = "<<this->numero2<<endl;
}
