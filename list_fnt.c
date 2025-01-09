#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list_fnt.h"


struct element* ajouter_eleve(struct list_fnt* liste,  char * nom, char * prenom, float note)
{
    struct element* p_nouveau = 0;  // nouvel élément à rajouter dans la liste

    // Tester si le ponter sur la liste est non nul
    if(liste != 0)
    {

        // Instancier une structure element pour le nouvel élève
        p_nouveau = malloc(sizeof(struct element));
        if(p_nouveau != NULL)
        {
            // affecter les membres de la structure
            p_nouveau->f_note = note;
            strcpy(p_nouveau->s_nom, nom);
            strcpy(p_nouveau->s_prenom, prenom);
           
            // Mettre à jours les liens  de la liste:  pointeurs p_next et p_prev
            p_nouveau->p_next = NULL;
            p_nouveau->p_prev = liste->p_fin;

            // Mettre à jour la liste
            if(liste->p_debut == NULL)
                liste->p_debut = p_nouveau;
            liste->p_fin = p_nouveau;
        }
    }
    return (p_nouveau);
}


void  afficher_element(struct element* p_eleve)
{
    printf(" =========================================\n");
    printf("\t Nom : \t %s\n", p_eleve->s_nom);
    printf("\t Prenom : \t %s\n", p_eleve->s_prenom);
    printf("\t Note : \t %f\n", p_eleve->f_note);
    printf(" \t\t******************\n");
    printf("\t Next pointeur : \t %x\n", p_eleve->p_next);
    printf("\t Prev pointeur : \t %x\n", p_eleve->p_prev);
    printf(" =========================================\n");

}