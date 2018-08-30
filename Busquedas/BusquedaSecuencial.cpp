//
// Created by gaburolo on 30/08/18.
//

#include "BusquedaSecuencial.h"
#include <iostream>
using namespace std;
class BusquedaSecuencial {
    int array[10] = {};
    int elemento=0;

public:
    void busqueda(int array[], int elemento) {

        int j = 0;

        int solucion[10] = {};
        for (int i = 0; i < 10; i++){

           if (array[i] == elemento) {

               solucion[j] = i;
               cout <<"Numero Encontrado en la posicion: "<< solucion[j] << endl;
               j++;

           }
       }
    }

};
