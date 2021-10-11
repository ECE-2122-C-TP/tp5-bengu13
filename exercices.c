#include "structures.h"
#include <stdio.h>

#include "exercices.h"
#define NB_ELEM_MAX 100

void exercice1(){
    NR1 nombreRationnel1 = saisie1();
    NR1 nombreRationnel2 = saisie1();
    NR1 resAdd = addittion(nombreRationnel1,nombreRationnel2);
    NR1 resMut = multiplication(nombreRationnel1,nombreRationnel2);
    affichage1(resAdd,resMut);
}
/*
 * IN = L'utilisateur rentre les nombres rationnels qu'il veut multiplier
 * Donc les numérateurs et dénominateurs
 * OUT Nous avons le resultats de l'addittion et de  la multiplication
 *
 *
 *
 */
void exercice2(){
    int tableaux[NB_ELEM_MAX] = {0};
    int i = 0  , variableLaPlusGrande = 0 , nombreEntier = 0 , nombreEntierRentrer , j=0;
    printf("Combien d'entier voulez vous mettre dans le tableau \n");
    scanf("%d",&nombreEntier);
    while(i<nombreEntier){
        printf("Veuillez entrer la valeur numero : %d\n",i+1);
        scanf("%d",&nombreEntierRentrer);
        tableaux[i] = nombreEntierRentrer;
        i = i + 1 ;
        if (variableLaPlusGrande < nombreEntierRentrer){
            variableLaPlusGrande = nombreEntierRentrer;
        }

    }
    for (j = 0; j < NB_ELEM_MAX; j++) {
        printf("%d ", tableaux[j]);
    }
    printf("\nLa valeur la plus grande est : %d",variableLaPlusGrande);
}
/*
 * INT =L'utilisateur rentre le nombre de valeur qu'il veut mettre dans son tableau.
 * OUT = LE programme renvoie le tableau avec les valeurs de l'utilisateur
 */
void exercice3(){
    int tableaux3[3][4]={{0}};
    int tableaux3Copie[12]={{0}};
    int valeurTableaux=0 , i =0 , j = 0,k=0, l=0 , m = 0 , w = 0 ;
    printf("Veuillez entrer les valeurs \n");
    for  (i=0;i < 3;i++){
        for (j=0;j< 4;j++){
            printf("Entrez la valeur de la ligne : %d et de la colonne %d \n" , i+1 ,j + 1);
            scanf("%d",&valeurTableaux);
            tableaux3[i][j] = valeurTableaux;
            tableaux3Copie[k] =valeurTableaux ;
            k=k+1;
        }
    }
    for (m = 0 ; m < 3 ; m++){
        for (w = 0 ; w < 4 ; w++){
            printf("%d\t",tableaux3[m][w]);
        }
        printf("\n");
    }
    printf("\t|\n");
    printf("\t|\n");
    printf("\t|\n");
    printf("\tv\n");

    for (l = 0; l < 12; l++) {
        printf("%d\t", tableaux3Copie[l]);
    }

}
/*
 * IN = L'utilisateur rentre le tableau a rentrer
 * OUT = Le tableau de base puis le tableau modifie
 */
