#include <iostream>
using namespace std;


void afisare(int v[], int dim) {



	for (int i = 0; i < dim; i++) {

		cout << v[i] << " ";
	}
}


//todo: Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.

//todo functie ce returneaza  nr de valori pare
int valoriPare(int v[], int n) {

	int nrPare = 0;

	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) {
			nrPare++;
		}
	}
	return nrPare;
}

int valoriImpare(int v[], int n) {

	int nrImpare = 0;

	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 1) {
			nrImpare++;
		}
	}
	return nrImpare;
}

void sol1() {

	
	int v[] = { 12,23,45,67,78};

	int dim = 5;


	int dif = abs(valoriImpare(v, dim) - valoriPare(v, dim));


	afisare(v,dim);



	cout << "Solutia este " << dif;

	


}


//todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.


void sol2() {

	int v[] = { 12, 42, 32, 63, 10, 25, 2 };
	int dim = 7;

	int ultim = v[dim - 1];

	
	for (int i = 0; i < dim; i++) {

		if (v[i] % dim == 0) {
			cout << v[i] << endl;
		 }
	}

}