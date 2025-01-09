struct element
{ char nom[16];
char prenom[16];
float f_note;
struct element* P_next;
struct element* p_prev;
};
/*type de donnee pour definir la liste*/
struct liste_fnt
{
       /* data */
  struct element* p_debut;

    struct element* p_fin;
};
/**/
struct element* ajouter_eleve(char*nom ,char*prenom, float note);
/**/
void afficher_element(struct element);
