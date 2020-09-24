#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int a;
    printf("Con lenguaje C \n");
    printf("Dame un valor: ");
    scanf("%d",&a);

    printf("a= %d \n",a);

    system("pause");
    system("cls");

    cout<<"Con lenguaje C++"<<endl;
    cout<<"Dame mi a: ";
    cin>>a;

    cout<<"a= "<<a;

    return 0;
}
