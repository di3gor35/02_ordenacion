#include <iostream>

using namespace std;

void interDirDer(int arreglo[], int n){
	int aux;
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j ++){
			if(arreglo[i] > arreglo[j]){
				aux = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = aux;
			}
		}
	}
}
void interDirIzq(int arreglo[], int n);
void interDirCen(int arreglo[], int n);
void interDirBi(int arreglo[], int n);

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
	interDirDer(arreglo, n);
	cout << endl;
	mostrarArreglo(arreglo, n);
	return 0;
}