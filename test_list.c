#include "list_fnt.h"

int main(int argc, char** argv)
{
    struct element* p_new = 0;
    struct list_fnt stru_liste;

    // Initialisation de la liste
    stru_liste.p_debut = 0;
    stru_liste.p_fin = 0;

    // Test  Ajouter Martin
    p_new = ajouter_eleve(&stru_liste, "Martin", "Luc", 17);
    afficher_element(p_new);

    // Test  Ajouter Martin
    p_new = ajouter_eleve(&stru_liste, "Delarue", "Aida", 14);
    afficher_element(p_new);

    return(0);
}