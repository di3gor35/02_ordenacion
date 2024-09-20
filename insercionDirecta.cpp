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

void insercionDirecta(int arreglo[],int n){
	int aux, k;
	for(int i= 1;i<=n;i++){
		aux = arreglo[i];
		k = i -1;
		while(k>=0 && aux < arreglo[k]){
			arreglo[k+1] = arreglo[k];
			k--;
		}
		arreglo[k+1]=aux;
	} 
}

int main() {
    int n; // Cantidad de elementos del arreglo
	cout << "Escriba la cantidad de elementos del arreglo: ", cin >> n;
	int arreglo[n];
	llenarArreglo(arreglo, n);
	mostrarArreglo(arreglo, n);

    insercionDirecta(arreglo, n);
    cout << endl;
	mostrarArreglo(arreglo, n);
    return 0;
}