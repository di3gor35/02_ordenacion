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

void seleccionDir(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = arreglo[i];
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (arreglo[j] < menor) {
                menor = arreglo[j];
                k = j;
            }
        }
        arreglo[k] = arreglo[i];
        arreglo[i] = menor;
    }
}

int main() {
    int n; // Cantidad de elementos del arreglo
	cout << "Escriba la cantidad de elementos del arreglo: ", cin >> n;
	int arreglo[n];
	llenarArreglo(arreglo, n);
	mostrarArreglo(arreglo, n);

    seleccionDir(arreglo, n);
    cout << endl;
	mostrarArreglo(arreglo, n);
    return 0;
}