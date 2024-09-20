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

void shellSort(int arreglo[], int n){
	int cen, aux;
	n--;
	int k = n+1;
	while(k>1){
		k/=2;
		cen = 1;
		while(cen == 1){
			cen = 0;
			int i = 0;
			while(i+k <= n){
				if (arreglo[i+k] < arreglo[i]){
					aux = arreglo[i];
					arreglo[i] = arreglo[i+k];
					arreglo[i+k] = aux;
					cen = 1;
				}
				i++;
			}
		}
	}
}

int main() {
    int n; // Cantidad de elementos del arreglo
	cout << "Escriba la cantidad de elementos del arreglo: ", cin >> n;
	int arreglo[n];
	llenarArreglo(arreglo, n);
	mostrarArreglo(arreglo, n);

    shellSort(arreglo, n);
    cout << endl;
	mostrarArreglo(arreglo, n);
    return 0;
}