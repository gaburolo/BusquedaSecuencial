#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Ingrese 10 elementos(En orden pls)"<<endl;
    int array[10] = {};
    int cont=0;
    while (cont<10){
        cout<<"Ingrese un numero: "<<endl;
        cin>>N;
        array[cont]=N;
        cont++;
    }

    cout<<"Ingrese el numero a buscar: "<<endl;
    cin>>N;

    int elemento = N;
    int j=0;

    int solucion[10]={};
    for(int i=0;i<10;i++)

        if(array[i]==elemento)

        {

            solucion[j]=i;
            cout << solucion[j]<<endl;
            j++;

        }

    return 0;
}