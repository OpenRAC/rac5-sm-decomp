/* LEVEL_04:0x0327B8 -- publie une valeur dans deux cases d'un etat
   global (0x970 puis 0x96C a l'execution) avant d'armer un sous-systeme et de rendre
   la main a son service.

   Les deux magasins precedent l'appel : le second tombe dans le cran de
   retard du jal, ce qui evite de garder le flottant recu dans un registre
   callee-saved.  L'ordre source est l'inverse de l'ordre retail : le
   compilateur echange les deux magasins d'un meme groupe. */

typedef struct {
    int pad[0x96C / 4];
    float f96C;
    float f970;
} R04;

extern R04 D_0024F950;

extern void func_08B080(int a0);
extern void func_031F90(void *a0, int a1);

void func_0327B8(void *a0, float x)
{
    D_0024F950.f96C = x;
    D_0024F950.f970 = x;
    func_08B080(16);
    func_031F90(a0, 1);
}
