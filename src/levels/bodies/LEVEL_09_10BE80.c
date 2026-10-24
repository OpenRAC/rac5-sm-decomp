/* LEVEL_09:0x10BE80 -- calcule le masque d'etat d'un triplet contre les
   bornes d'une table.

   La forme retail : la table est un pointeur global ; la premiere
   comparaison ecrit le masque (donc branche en "faux"), les suivantes
   font un OU (donc branche en "vrai").  `c.lt.s` + `bc1tl` imposent
   l'ecriture `a < b` avec `>` dans le sens oppose du source. */
typedef struct {
    float v[19];
} Lim;

extern Lim *D_001F08A8;

int func_10BE80(float *a0)
{
    Lim *lim = D_001F08A8;
    int flags = 0;
    if (a0[0] < lim->v[13]) flags = 1;
    if (a0[1] < lim->v[14]) flags |= 2;
    if (a0[2] < lim->v[15]) flags |= 4;
    if (lim->v[16] < a0[0]) flags |= 8;
    if (lim->v[17] < a0[1]) flags |= 0x10;
    if (lim->v[18] < a0[2]) flags |= 0x20;
    return flags;
}
