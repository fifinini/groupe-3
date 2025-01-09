/* Type de donnée pour definir les éléments la liste 
   représentant un élève */
struct element
{
    /* data */
    char s_nom[40];
    char s_prenom[40];
    float f_note;
    struct element* p_next;
    struct element* p_prev;
};

/* Type de donnée pour definir la liste */
struct list_fnt
{
    /* data */
    struct element* p_debut;
    struct element* p_fin;
};

/**/
struct element* ajouter_eleve(struct list_fnt*, char * nom, char * prenom, 
                                float note);

/**/
void  afficher_element(struct element*);