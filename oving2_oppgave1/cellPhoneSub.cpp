//
//
//
// cellPhoneSub.cpp
//
//
//
#include <iostream>
using namespace std;

int main()
{
	const double subAfixedRate = 50;
	const double subAminRate = 1;
	const double subBfixedRate = 0;
	const double subBminRate = 2.50;
	double       monthUse;
	double costA;
	double costB;


	cout << "Skriv inn hvor mange minutter du ringer med din telefon gjenomsnitlig pr m�ned." << endl;
	cin >> monthUse;


	// calculating the cost of using subscription A
	costA = subAfixedRate + (subAminRate * monthUse);
	costB = subBfixedRate + (subBminRate * monthUse);

	if (costA < costB) {
		cout << "Du b�r velge abonemangstype A, beregnet kostnad:  " << costA << "KR pr m�ned  "<< endl;
	}
	else if (costB < costA) {
		cout << "Du b�r velge abonemangstype B, beregnet kostnad:  " << costB << "KR pr m�ned  " << endl;
	}
	else {
		cout << "Valg har av abonemang har ingen betydning.";
	}
}

// Besvarelse: 
// Datakrav: vi trenger � innhente gjenomsnitlige minutter fra brukeren,
// vi m� videre sette opp de kjente parameterene vedr�rende abbonemangene, jeg setter opp disse 
// som konstanter, siden det i dette tilfellet ikke er behov for � endre p� dem. 
// formel: faktisk_kostnad = fast_kostnad + (minutt_rate * antall_minutter_ringt); 
// utregningen gj�res for hver abonemnags type og resultatene samenlignes. 