/* LEVEL_24:0x107D30 -- relaie un objet au service, avec une zone locale
   quand l'appelant ne fournit pas de cible (le ternaire donne le movn
   $a0,$a2,$a2 du retail). */

typedef struct {
    int p00;
    int p04;
    int f08;
} Ctx;

extern Ctx *D_001D7A28;
extern void func_107D70(void *a0, void *a1, int a2, void *a3, float v);

void func_107D30(void *a0, float *a1, void *a2)
{
    char buf[0x10];
    void *p = a2 ? a2 : (void *)buf;

    func_107D70(p, a0, D_001D7A28->f08, a1, a1[3]);
}
