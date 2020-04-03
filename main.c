#include <stdio.h>
#include <stdlib.h>
#include "Structure.h";
void menu();
void gestionEmploye();
void ajouterEmploye();
void afficherListeEmploye();
void modifierEmploye();
void supprimerEmploye();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	menu();
	return 0;
}


void menu(){
	int choix = 0;
	printf("Bienvenue,\n");
	printf("Veuillez choisir une option\n");
	printf("1. Gestion des employes\n");
	printf("2. Gestion des departement\n");
	printf("3. Gestion des employes par departement\n");
	printf("4. Quitter\n");
	printf("Entrez votre choix: ");
	scanf("%d",&choix);
	switch(choix)	{
		case 1:
			gestionEmploye();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}	
}

void gestionEmploye(){
	int option = 0;
	printf("\n\nBienvenue dans la gestion des employes\n");
	printf("1. Ajouter employe\n");
	printf("2. Modifier employe\n");
	printf("3. Supprimer un employe\n");
	printf("4. Afficher la liste des employesr\n");
	printf("Veuillez choisir une option: ");
	scanf("%d", &option);
	switch(option){
		case 1:
			ajouterEmploye();
			break;
		case 2:
			modifierEmploye();
			break;
		case 3:
			supprimerEmploye();
			break;
		case 4:
			afficherListeEmploye();
		     break;
			
	}
	
}

void ajouterEmploye(){
	Employes Employe1;
	printf("Entrez l\'identifiant de l\'employe: ");
	scanf("%d", &Employe1.identifiant);	
	printf("\nEntrez le nom de l\'employe: ");
	scanf("%s", &Employe1.nom);
	printf("\nEntrez le prenom de l\'employe: ");
	scanf("%s", &Employe1.prenom);
	printf("\nEntrez l\'adresse de l\'employe: ");
	scanf("%s", &Employe1.adresse);
	printf("\nEntrez le numero de telephone: ");
	scanf("%s", &Employe1.numeroTelephone);
	printf("\nEntrez le couriel adresse: ");
	scanf("%s", &Employe1.adresseCourriel);
	printf("\nEntrez la fonction: ");
	scanf("%s", &Employe1.fonction);
	
	FILE* fichier = NULL;
	
	fichier = fopen("test.txt","w");
	if(fichier !=NULL){
		fprintf(fichier, "Identifiant: %d, Nom: %s, Prenom: %s, Adresse employe: %s, Numero de telephone: %s, Couriel adresse: %s, Fonction: %s",Employe1.identifiant, Employe1.nom,Employe1.prenom, Employe1.adresse,Employe1.numeroTelephone,
	     Employe1.adresseCourriel,Employe1.fonction);
	fclose(fichier);
	}
	
}

void afficherListeEmploye(){
printf("liste");
}

void modifierEmploye(){
		printf("modifier");
}
void supprimerEmploye(){
	printf("supprimer");
}



