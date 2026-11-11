/* LEVEL_03:0x1F0448 -- avance un compteur flottant d'un pas global et
   signale le franchissement de 5.0.

   Le magasin precede le test (il tombe dans le cran de retard du bc1t) :
   la valeur est ecrite puis comparee.  Le franchissement arme un service
   et rend 1, sinon 0. */

extern float D_0024C7AC;
extern void func_07C468(void *a0, int a1);

int func_1F0448(float *a0)
{
    float f = a0[28] + D_0024C7AC;

    a0[28] = f;
    if (f > 5.0f) {
        func_07C468(a0, 1);
        return 1;
    }
    return 0;
}
