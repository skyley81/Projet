#include "pile.h"
#include <stdio.h>


void init_pile(pile_t *p){
    p->tete=-1;}
    
void empiler(pile_t *p, int e){
    if (p->tete<PILE_TAILLE){
        ++p->tete;
        p->elts[p->tete]=e;
    }}
    
int depiler(pile_t *p){
    if (p->tete >-1){
        --p->tete;
        return p->elts[p->tete];
    }return 0;}
    
int sommet(const pile_t *p){
    if(p->tete>-1)
        return p->elts[p->tete];
    return 0;}

bool pile_vide(const pile_t *p){
    if (p->tete ==-1)
        return true;
    return false;}
    
bool pile_pleine(const pile_t *p){
    if (p->tete ==PILE_TAILLE-1)
        return true;
    return false;}
    
void afficher_pile(const pile_t *p){
    for(int i=0;i<p->tete;i++)
        printf("%d\n",p->elts[i]);
    }
        
        
    
