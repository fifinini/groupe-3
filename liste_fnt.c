
#include "liste_fnt.h"

struct element* ajouter_eleve(struct liste_fnt* liste , char*nom, char*prenom, float note)
{ 
    struct element* p_nouveau=0;//nouvel élément à rajouter dans la liste
    //instancier une structure element pour le nouvel nul
    if(liste !=0)
    {
    //instancier une structure element pour le nouvel éléve
p_nouveau = malloc (sizeof(), 1);
if(p_nouveau !=0)
{
    // affecter les membres de la structure
p_nouveau->f_note =note;
strucpy(p_noveau->s_nom,)
    //mettre à jours les liens : pointeurs p_next et p_prev

    //ajouter dans le liste 

    //mettre à jour la liste  
}
    return (p_nouveau);
}

void afficher_element(struct element* p_eleve)
{

}