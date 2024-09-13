#include <iostream>

using namespace std;


void llenarArreglo(int arreglo[], int n){
	for(int i = 0; i < n; i++){
		cout << "Digite el " << i+1 << " elemento: ", cin >> arreglo[i];
	}
}

void mostrarArreglo(int arreglo[], int n){
	for(int i = 0; i < n; i++){
		cout << arreglo[i] << " ";
	}
}

int main(){
	int n; // Cantidad de elementos del arreglo
	cout << "Escriba la cantidad de elementos del arreglo: ", cin >> n;
	int arreglo[n];
	llenarArreglo(arreglo, n);
	mostrarArreglo(arreglo, n);
	return 0;
}