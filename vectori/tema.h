#include <iostream>
using namespace std;

void afisare(int v[], int dim) {



	for (int i = 0; i < dim; i++) {

		cout << v[i] << " ";
	}
}

// 1) todo: Se citește un vector cu n elemente, numere naturale. Să se înlocuiască fiecare element prim din vector cu 0, apoi să se afișeze vectorul. ???

int numarDivizori(int nr) {

	int ct = 1;

	for (int k = 1; k < nr; k++) {
		if (nr % k == 0) {
			ct++;
		}
	}
	return ct;
}

bool isNrPrim(int nr) {

	if (numarDivizori(nr) == 2) {
		return true;
	}
	else {
		return false;
	}

}

void sol1() {

	int v[] = { 12,23,45,67,78 };

	int dim = 5;

	for (int i = 0; i < dim; i++) {
		if (isNrPrim(i) == true) {
			v[i];
		}
	}
	cout << v;
}


// 2)  todo: Se citește un vector cu n elemente, numere naturale. 
// Să se afișeze elementele cu indici pari în ordinea crescătoare a indicilor, iar elementele cu indici impari în ordinea descrescătoare a indicilor.

void sol2() {

	int v[] = { 15, 2 ,9 , 4 , 6 , 24, 31 , 5 };
	int dim = 8;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			cout << v[i]<<" ";
		}

		else if(v[i] % 2 == 1){
			cout << v[i] << " ";
		}
	}

}


// 3) todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele vectorului în următoarea ordine: primul, ultimul, al doilea, penultimul, etc.

void sol3() {

	int v[] = { 15, 2 ,9 , 4 , 6  };
	int dim = 5;

	cout << v[0] << v[4] << v[1] << v[3] << v[2];

}


// 4) todo: Calculaţi valoarea minimă minim și valoarea maximă maxim a valorilor elementelor vectorului.

void sol4() {

	int v[] = { 9, 2, 3, 1, 4, 5, 6 };
	int dim = 7;

	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
		}
		if (v[i] < min && v[i] != max) {
			min = v[i];
		}

	}
	cout << "Cea mai mare valorea este " << max << " iar cea mai mica valorea este " << min;
}


// 5) todo: Calculaţi indicele imin și indicele imax ai elementului cu valoarea minimă, respectiv cu valoarea maximă, din vectorul dat.

void sol5() {

	int v[] = { 9, 2, 3, 1, 4, 5, 6 };
	int dim = 7;

	int max = INT_MIN;
	int min = INT_MAX;
	int imin = 9;
	int imax = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] > max) {
				imax = i;
		}
		if (v[i] < min && v[i] != max) {
				imin = i;
		}

	}
	cout << "Indicile cu valorea max este " << imax << ", iar indicile cu valorea min este " << imin;
}


// 6) todo: Se citește un vector cu n elemente, numere naturale. Să se determine câte elemente ale vectorului sunt egale cu diferența dintre cea mai mare și cea mai mică valoare din vector.

void sol6() {

	int v[] = { 3, 9, 7, 6, 4, 2, 7 };
	int dim = 7;
	int ct = 0;
	int max = INT_MIN;
	int min = INT_MAX;

	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
		}
		if (v[i] < min) {
			min = v[i];
		}
	}
	int dif = max - min;

	for (int i = 0; i < dim; i++) {
		if (v[i] == dif) {
			ct++;
		}
	}

	cout << "Sunt " << ct << " numere egale cu diferenta dintre valorea maxima si valorea minima";
}


// 7) todo: Se citește un vector cu n elemente, numere naturale distincte. 
// Să se afișeze elementele cuprinse între elementul cu valoarea minimă și cel cu valoare maximă din vector, inclusiv acestea. ???

void sol7() {

	int v[] = { 3, 4, 9, 6, 5, 2, 7 };
	int dim = 7;
	int max = INT_MIN;
	int min = INT_MAX;

	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
		}
		if (v[i] < min) {
			min = v[i];
		}
	}
	for (int i = 0; i < dim; i++) {
		if (max == v[i] && min == v[i]) {
			cout << v[i] << " ";
		}
	}
}


// 8) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre elemente au valoarea strict mai mare decât media aritmetică a elementelor vectorului.

void sol8() {

	int v[] = { 1, 3, 9, 12, 5 };
	int dim = 5;
	int mediaA = 0, ct = 0;

	for (int i = 0; i < dim; i++) {

		mediaA = v[i] + mediaA;

	}
	mediaA = mediaA / 2;

	for (int i = 0; i < dim; i++) {
		if (v[i] > mediaA) {
			ct++;
		}
	}
	cout << "Sunt " << ct << " care au valorea mai mare ca media artimetica, care este " << mediaA;
}


// 9) todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.

void sol9() {

	int v[] = { 12, 42, 32, 63, 10, 25, 2 };
	int dim = 7;

	int ultim = v[dim - 1];


	for (int i = 0; i < dim; i++) {

		if (v[i] % v[6] == 0) {
			cout << v[i] << endl;
		}
	}

}


// 10) todo: Se dă un șir cu n elemente, numere reale. Să se determine câte dintre elemente se află în afara intervalului închis determinat de primul și ultimul element.

void sol10() {

	int v[] = { 2, -3, -8, 53, 14, 52 };
	int dim = 6;
	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] >= v[0] && v[i] <= v[5]) {
			ct++;
		}
	}
	cout << "Sunt " << dim - ct << " elemente care se afla in afara intervalului inchis";
}


// 11) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente egal depărtate de capetele vectorului sunt prime între ele. ???

// 12) todo: Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, care să conțină elementele prime din x, în ordine inversă. ???

void sol12() {

	int v[] = { 5,2,15,3,19,4 };
	int dim = 6;
	int y[5];

	for (int i = 0; i < dim; i++) {
		if (isNrPrim(v[i]) == true) {
			//y[5] = v[i];
		}
	}

}


// 13) todo: Calculaţi valoarea maxima maxim a celor n numere date şi numărul nrmax de apariţii ale acestei valori în şir.

void sol13() {

	int v[] = { 4, 3, 2, 9, 6, 9, 4, 9 };
	int dim = 8;

	int max = INT_MIN, ct = -1;

	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
		}
		if (max == v[i]) {
			ct++;
		}
	}
	cout << "Valorea maxima este " << max << " si apare de " << ct << " ori";
}


// 14) todo: Să se determine câte elemente din şir sunt egale cu ultimul element al acestuia.

void sol14() {

	int v[] = { 2, 5, 7, 2, 3, 0, 9, 2 };
	int dim = 8;
	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] == v[7]) {
			ct++;
		}

	}
	cout << ct << " elemente din sir sunt egale cu ultimul element din sir";
}


// 15) todo: Să se determine câte elemente din şir sunt numere prime.

void sol15() {

	int v[] = { 5, 2, 7 ,33, 12, 92 };
	int dim = 6;
	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (isNrPrim(v[i]) == true) {
			ct++;
		}
	}
	cout << ct << " elemente din sir sunt numere prime";
}


// 16) todo: Se dă un şir cu n numere naturale. Să se afişeze suma primilor n termeni din şir, apoi suma primilor n-1 termeni din şir, şi aşa mai departe.

void sol16() {

	int v[] = { 5, 4, 9, 13, 1, 24 };
	int dim = 6;
	int s = 0;

	for (int i = 0; i < dim; i++) {
		s = s + v[i];
	}
	cout << s << endl;
	cout << s - v[5] << endl;
	cout << s - v[4] - v[5] << endl;
	cout << s - v[3] - v[4]- v[5] << endl;
	cout << s - v[2] - v [3] - v[4] - v[5]<< endl;
	cout << s - v[1] - v[2] - v[3] - v[4] - v[5] << endl;
}


// 17) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente egal depărtate de capetele vectorului sunt prime între ele. ???

// 18) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector au aceeași cifră zecilor. ???

// 19) todo: Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.

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


	int v[] = { 12,23,45,67,78 };

	int dim = 5;

	int dif = abs(valoriImpare(v, dim) - valoriPare(v, dim));

	afisare(v, dim);

	cout << "Solutia este " << dif;
}

// 20 todo: Se da un vector cu n elemente. Sa se afișeze pe ecran elementele din vector care divid factorialul numărului de elemente n. ???