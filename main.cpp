#include <iostream>
#include <string>
using namespace std;


int main(){

	int nombre=0;
	int nombreMystere = 0;

	srand(time(NULL));
	// genere un nombre aléatoire entre 0 et 99 et le stocke dans la variable nombreMystere
	nombreMystere = (rand()%(100));

	// afficher un texte à l'écran
	cout << "entrez un nombre" << endl;
	// lire le nombre tapé au clavier et l'enregistrer dans la variable nombre
	cin >> nombre ;

	// affiche à l'écran le nombre saisi
	cout << "vous avez saisi : " << nombre << endl;

	//le programme se termine normalement en renvoyant 0
	return 0;
}
