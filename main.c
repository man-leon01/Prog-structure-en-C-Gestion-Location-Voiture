#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

// Variables Globales
int choix;
// Les constantes : char max,
#define CMAX 20

// Les Structures
typedef struct {
    char Marque[CMAX];
    int Annee;
    char Matricule[CMAX];
    int Kilometrage;
    char Etat[CMAX];
} Voiture;

typedef struct {
    char Nom[CMAX];
    char Adresse[CMAX];
    char Identite[CMAX];
    int Telephone;
} Client;

typedef struct {
    char Identite_Client[CMAX];
    char Matricule_Voiture[CMAX];
    int Date_Location;
    int Date_Retour;
    float Montant;
    float Avance;
    float Reste;
} Location;

typedef struct {
    char Login_Admin[CMAX];
    int Mot_de_passe;
} Securite;

void Menu(){
    do {
        printf("\n     === MENU PRINCIPAL ===\n\n");
        printf("   1. Gestion des Voitures\n");
        printf("   2. Gestion des Clients\n");
        printf("   3. Gestion des Locations\n");
        printf("   4. QUITTER\n");
        printf("                               choix : ");
        scanf("%d", &choix);
        while ((choix = getchar()) != '\n' && choix != EOF);

        switch (choix) {
            case 1: GestionVoitures(); break;
            case 2: GestionClients(); break;
            case 3: GestionLocations(); break;
            case 4: Quitter(); break;
            case 0: printf("Choix Invalide!!!"); Menu(); break;
            default: printf("Choix Invalide!!!\n");
        }

    } while (choix != 0);
}
void GestionVoitures(){
    printf("\nFonction de Gestion des Voitures\n");
}
void GestionClients(){
    printf("\nFonction de Gestion des Clients\n");
}
void GestionLocations(){
    printf("\nFonction de Gestion des Locations\n");
}
void Quitter(){
    printf("\n     ===Quitter le Programme===\n");
    printf("Voulez-vous vraiment quitter le programme ?\nSi oui appuyer sur 1 ou 'y'\nSi non appuyer sur autre caractère\n");
    printf("\nEntrez votre reponse : ");
    char ch;
    ch = getchar();
    if (ch == '1' || ch == 'y'){
        return 0;
    }else{
        printf("\nRetour au Menu Principal\n");
        Menu();
        
    }
    
}



int main()
{
    setlocale(LC_ALL,"");
    printf("\n  ===EPL---LOCATIONS--CAR===\n");
    Menu();
    return 0;
}
