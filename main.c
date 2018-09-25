#include <stdio.h>
#include <stdlib.h>
#include "main_menu.h"

/*

Indications du prof :
- L'eleve ne s'incrit pas, c'est l'administrateur qui l'inscrit
- L'admin peut enrregistrer des eleves, affecter des profs, creer des grouoes ...
- L'eleve peut juste afficher son planning
- les tableaux doivent être dynamiques

- Prendre 2 eleves avec 2 groupes et faire en sorte que chaque eleve voit uniqumenet son groupe
- Definir des fonctionnalites et faire en sorte que celle la fonctionne.



A faire :
- Voir planning ( semaine ou journee etc ) => lire le fichier de planning et afficher les informations en fonctions des options
- Voir groupe



Organisation fichier :
- 1 fichier planning => groupe/jour/heure1(cours+enseignant)/heure2(cours+enseignant)/heure3/heure4(cours+enseignant)...
- 1 fichier groupe => groupe/nom

*/

int main(void)
{

    print_main_menu();

    return 0;
}
