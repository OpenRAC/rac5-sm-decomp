/* LEVEL_07:0x014AB8 -- lit une valeur par un service (cinq arguments
   don't le dernier est le mode 0) et la publie dans l'objet recu (+4)
   puis, si le second pointeur existe, chez lui.

   Meme queue que les corps a un seul argument : le magasin local passe
   par son adresse et le retail recharge la case avant chaque magasin
   conditionnel. */

extern int func_014B10(void *a0, float *out, void *a2, int a3, int a4);

void func_014AB8(void *a0, void *a1, void *a2)
{
    float f;

    if (func_014B10(a0, &f, a2, 56, 0) != 0) {
        *(float *)((char *)a0 + 4) = f;
    }
    if (a1 != 0) {
        *(float *)a1 = f;
    }
}
