#include <iostream>
#include <string>
using namespace std;


int main(){

	int continu=1;
	while (continu==1)
	{
	int nombre=0;
	int nombreMystere = 0;
	int essais(0);
	int mode=1;
	int diff=0;
	srand(time(NULL));

	//afficher un texte à l'écran
	cout << "mode un joueur tapez 1" << endl;
	cout << "mode deux jouers tapez 2" << endl;
	cin >> mode;

	//afficher un texte à l'écran
	cout << "Niveau entre 1 et 100, tapez 1" << endl;
	cout << "Niveau entre 1 et 1000, tapez 2" << endl;
	cout << "Niveau entre 1 et 10000, tapez 3" << endl;
	cin >> diff;
		
		//Choix de la diff
		if (diff==1)
		{
		nombreMystere=rand()%100 + 1;
		diff=100;
		}
		else if (diff==2)
		{
		nombreMystere=rand()%1000 + 1;
		diff=1000;
		}
		else
		{
		nombreMystere=rand()%10000 + 1;
		diff=10000;
		}

		if (mode==2)
		{
		//afficher un texte à l'écran
		cout << "Joueur 1 choisissez un nombre mystère entre 1 et " << diff << " :" << endl;

		cout << nombreMystere << endl;

		cin >> nombreMystere;
		cout << "Joueur 2 entrer un nombre entre 1 et " << diff << " :" << endl;
		}
		else
		{

		// afficher un texte à l'écran
		cout << "Entrez un nombre entre 1 et "<< diff << " :" << endl;
		}
		
		cout << nombreMystere << endl;

			while (nombreMystere!=nombre)
			{
			essais++;
			// lire le nombre tapé au clavier et l'enregistrer dans la variable nombre
			cin >> nombre ;
				if(nombreMystere<nombre)
					cout << "Trop Grand, essaye encore" << endl;
				else if (nombreMystere>nombre)
					cout << "Trop Petit, essaye encore" << endl;
			}

	// Affiche ce message quand le nombre est trouvé
	cout << "Félicitation vous avez trouvé le nombre mystère (" << nombre << ") en : " << essais << " essais !" << endl;
	cout << "voulez-vous rejouer ? Tapez 0 pour arreter ou 1 pour rejouer" << endl;
	cin >> continu;
	}

	//le programme se termine normalement en renvoyant 0
	return 0;
}
