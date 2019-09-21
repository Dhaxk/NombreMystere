#include <iostream>
#include <string>
using namespace std;


int main(){

	int nombre=0;
	// afficher un texte à l'écran
	cout << "entrez un nombre" << endl;
	// lire le nombre tapé au clavier et l'enregistrer dans la variable nombre
	cin >> nombre ;

	// affiche à l'écran le nombre saisi
	cout << "vous avez saisi : " << nombre << endl;

	//le programme se termine normalement en renvoyant 0
	return 0;
}
