#include <iostream>
#include <vector>

using namespace std;

int BusquedaBinaria(float num, vector<float> vect, int ini, int fin){
        if(ini > fin) return -1;

        int medio = (ini + fin) / 2;

        if(vect[medio] == num) return medio;
        else if(vect[medio] < num) return BusquedaBinaria(num, vect, ini, medio-1);
        else return BusquedaBinaria(num, vect, medio+1, fin);
}
