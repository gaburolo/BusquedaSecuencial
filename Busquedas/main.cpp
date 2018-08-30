#include <iostream>
#include "BusquedaBinaria.cpp"
#include "BusquedaSecuencial.cpp"
using namespace std;

int main() {
    int N,elemento;
    cout << "Ingrese 10 elementos(En orden pls)" << endl;
    int array[10] = {};
    int cont = 0;
    while (cont < 10) {
        cout << "Ingrese un numero: " << endl;
        cin >> N;
        array[cont] = N;
        cont++;
    }

    cout << "Ingrese el numero a buscar: " << endl;
    cin >> elemento;

    BusquedaBinaria binaria;
    BusquedaSecuencial secuencial;
    binaria.busqueda(array, elemento);
    secuencial.busqueda(array,elemento);
    return 0;


}