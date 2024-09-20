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

void reduce(int arreglo[], int inicio, int final){
	int cen, pos, aux;
	int izq = inicio;
	int der = final;
	pos = izq;
	cen = 1;
	while(cen == 1){
		cen = 0;
		while((arreglo[pos] <= arreglo[der]) && (pos != der)){
			der--;
		}
		if (pos != der){
			aux = arreglo[pos];
			arreglo[pos]= arreglo[der];
			arreglo[der] = aux;
			pos = der;
			
			while((arreglo[pos] >= arreglo[izq]) && (pos != izq)){
				izq++;
			}
			if (pos != izq){
				aux = arreglo[pos];
				arreglo[pos] = arreglo[izq];
				arreglo[izq] = aux;
				pos = izq;
				cen = 1;
			}
		}
		if (pos-1 > inicio){
			reduce(arreglo, inicio, pos-1);
		}
		if (pos+1<final){
			reduce(arreglo, pos+1, final);
		}
	}
}

void quickSort(int arreglo[], int n){
	reduce(arreglo, 0 ,n);
}

int main(){
	int n; // Cantidad de elementos del arreglo
	cout << "Escriba la cantidad de elementos del arreglo: ", cin >> n;
	int arreglo[n];
	llenarArreglo(arreglo, n);
	mostrarArreglo(arreglo, n);

    quickSort(arreglo, n);
    cout << endl;
	mostrarArreglo(arreglo, n);
	return 0;
}