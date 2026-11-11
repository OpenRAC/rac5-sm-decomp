/* LEVEL_23:0x000740 -- rend le flottant +0x10 de l'objet que le service
   construit a partir du global D_00202B90 (le pointeur rendu en $v0). */

extern char *D_00202B90;
extern char *func_0008A8(void *a0);

float func_000740(void)
{
    return *(float *)(func_0008A8(D_00202B90) + 0x10);
}
