/* LEVEL_02:0x08EAC8 -- renvoie le flottant a +0x30, oppose si le test
   d'un sous-systeme repond vrai.

   Les deux sorties lisent la meme case : le compilateur remonte la
   lecture au-dessus de la branche (sa forme inchangee dans les deux
   chemins), la laisse dans le cran de retard du bnez et n'a plus qu'a
   opposer le registre dans le bloc hors ligne. */

extern int func_02ABB8(int a0);

float func_08EAC8(void *a0)
{
    if (func_02ABB8(4) != 0) {
        return -*(float *)((char *)a0 + 0x30);
    }
    return *(float *)((char *)a0 + 0x30);
}
