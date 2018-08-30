//
// Created by gaburolo on 30/08/18.
//

#include "BusquedaBinaria.h"
#include "iostream"
using namespace std;
class BusquedaBinaria {
    int array[10] = {};
    int elemento=0;

public:
    void busqueda(int array[], int elemento) {
        int prim, ult, mitad;
        prim = 0;
        ult = 10;
        while (prim <= ult) {
            mitad = (prim + ult) / 2;
            if (array[mitad] == elemento) {
                cout << "Numero Encontrado en la posicion: " << mitad << endl;
                break;
            }
            if (array[mitad] > elemento) {
                ult = mitad;
                mitad = (prim + ult) / 2;
            }
            if (array[mitad] < elemento) {
                prim = mitad;

            }
        }
    }

};
