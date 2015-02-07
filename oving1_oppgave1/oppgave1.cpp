//
//
//oppgave1 til øving1 hist. 
//frist solo by ahammernes. 
//
#include <iostream>
using namespace std;

int main()
{
	double speed;
	double distance;
	double time;
	double MeanSpeed;

	cout << "Enter distance traveled in km ";
	cin >> distance ; 

	cout << "Enter time used in hours ";
	cin >> time;

// formula = distance = speed * time;
	MeanSpeed = distance / time;
	cout << "avrage speed: " << MeanSpeed << endl;
	return 0;
} // main
// TODO: expand with other calculating options, add sugested speed for time now vs time needed to arrive. 