#include <iostream>
#include <vector>
#include "BB_INV.h"

using namespace std;


int main(){
        vector<float> vect = {13.5, 13.7, 11.9, 10.3, 8.2, 7.698, 7.3, 4.2, 3.1, 2.22, 2.02, 1.06, 0.1};
        float buscar;
        cout << "Escribe el valor que buscas: ";
        cin >> buscar;

        int pos = BusquedaBinaria(buscar, vect, 0, 12);
        cout << "El valor que buscas está en la posición:  " << pos << endl;
	return 0;
	}
