#include <iostream>
#include <string>
using namespace std;


int main(){

	int nombre=0;
	int nombreMystere = 0;
	int essais(0);
	srand(time(NULL));
	// genere un nombre aléatoire entre 0 et 99 et le stocke dans la variable nombreMystere
	nombreMystere = (rand()%(100));

	// afficher un texte à l'écran
	cout << "entrez un nombre entre 1 et 100" << endl;

		while (nombreMystere!=nombre)
		{
		essais++;
		// lire le nombre tapé au clavier et l'enregistrer dans la variable nombre
		cin >> nombre ;
			if(nombreMystere<nombre)
				cout << "Trop Grand" << endl;
			else if (nombreMystere>nombre)
				cout << "Trop Petit" << endl;
		}

	// Affiche ce message quand le nombre est trouvé
	cout << "Félicitation vous avez trouvé le nombre mystère (" << nombre << ") en : " << essais << " essais !" << endl;

	//le programme se termine normalement en renvoyant 0
	return 0;
}
