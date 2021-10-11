#include "structures.h"
#include <stdio.h>
 NR1 saisie1(){
    NR1 variable1 ;
     printf("Veuillez entrer le  numerateur\n");
     scanf("%d",&variable1.numerateur1);
     printf("Veuillez entrer le  denomianteur\n");
     scanf("%d",&variable1.denominateur1);
     return variable1;
}


NR1 multiplication(NR1 nombreRationnel1,NR1 nombreRationnel2)
{
    NR1 resultMut;
    resultMut.numerateur1 =(nombreRationnel1.numerateur1 * nombreRationnel2.numerateur1);
    resultMut.denominateur1 = (nombreRationnel1.denominateur1*nombreRationnel2.denominateur1);
    return resultMut;
}
NR1 addittion(NR1 nombreRationnel1,NR1 nombreRationnel2){
    NR1 resultAdd;
    resultAdd.numerateur1 =(nombreRationnel1.numerateur1*nombreRationnel2.denominateur1+nombreRationnel2.numerateur1*nombreRationnel1.denominateur1);
    resultAdd.denominateur1 = (nombreRationnel1.denominateur1*nombreRationnel2.denominateur1);
    return resultAdd;
}
void affichage1(NR1 resAdd ,NR1 resMut){
    printf("L'addition vaut : %d / %d \n",resAdd.numerateur1,resAdd.denominateur1);
    printf("La multiplication vaut : %d / %d \n",resMut.numerateur1,resMut.denominateur1);
}

