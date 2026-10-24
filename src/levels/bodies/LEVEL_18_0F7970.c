/* LEVEL_18:0x0F7970 -- borne une valeur : le service rend 1 quand il a
   valide les deux premiers arguments, et la case visee est ramenee dans
   l'intervalle [v0, v1].

   Les deux bornes sont gardees pour les deux comparaisons ; chaque
   magasin de correction tombe dans le cran de retard du bc1tl, d'ou la
   forme `c.lt.s` + magasin.  Le troisieme argument du service est le
   meme pointeur que le second. */

extern char D_001CDB60[];
extern int func_000000(void *a0, void *a1, void *a2);

int func_0F7970(void *a0, float *a1, float v0, float v1)
{
    if (func_000000(a0, D_001CDB60, a1) != 1) {
        return 0;
    }
    if (a1[0] < v0) {
        a1[0] = v0;
    }
    if (a1[0] > v1) {
        a1[0] = v1;
    }
    return 1;
}
