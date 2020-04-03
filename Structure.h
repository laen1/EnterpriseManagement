#ifndef HEADER_FILE
#define HEADER_FILE

typedef struct Employes Employes;
struct Employes
{
	int identifiant;
	char nom[100];
	char prenom[100];
	char adresse[100];
	char numeroTelephone[100];
	char adresseCourriel[100];
	char fonction[100];
};

typedef struct Departement Departement;

struct Departement {
	char nom[100];
	int identifiant;
	char fonction[100];
};

#endif
