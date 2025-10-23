#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>

using namespace std;


int main(){
	vector<float> vect = {15.3, 9.8, 8.9, 2.23, 5.66, 8.76, 3.2, 6.5, 29.7, 0.6};

	auto start = chrono::system_clock::now();  

	QuickSort(vect, 0, 9); 

	auto end = chrono::system_clock::now();

	cout << "El vector ha quedado así: ";
	for(int i=0; i<vect.size(); i++){
		cout << vect[i] << " ";
	}
	cout << endl;


	chrono::duration<float, milli> duration = end - start;
	cout << "Ha tardado en ordenarse: " << duration.count() << "s" << endl;


	float buscado;
        cout << "Escribe el valor que buscas: ";
        cin >> buscado;

	int pos = BusquedaBinaria(buscado, vect, 0, 9);
	cout << "La posición del valor que buscas es: " << pos << endl;
	return 0;
}
