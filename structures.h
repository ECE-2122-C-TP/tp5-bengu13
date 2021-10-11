//
// Created by benjamin on 06/10/2021.
//

#ifndef UNTITLED7_STRUCTURES_H
#define UNTITLED7_STRUCTURES_H
struct NombreRationnel{
    int numerateur1 ;
    int denominateur1;
};

typedef struct NombreRationnel NR1;

NR1 saisie1();
NR1 multiplication(NR1 nombreRationnel1,NR1 nombreRationnel2);
NR1 addittion(NR1 nombreRationnel1,NR1 nombreRationnel2);
void affichage1(NR1 resAdd , NR1 resMut);
#endif //UNTITLED7_STRUCTURES_H
