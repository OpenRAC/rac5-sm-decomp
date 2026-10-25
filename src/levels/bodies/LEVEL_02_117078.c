/* LEVEL_02:0x117078 -- relaie un objet au service, avec une zone locale
   quand l'appelant ne fournit pas de cible (le ternaire donne le movn
   $a0,$a2,$a2 du retail). */

typedef struct {
    int p00;
    int p04;
    int f08;
} Ctx;

extern Ctx *D_0021BD68;
extern void func_1170B8(void *a0, void *a1, int a2, void *a3, float v);

void func_117078(void *a0, float *a1, void *a2)
{
    char buf[0x10];
    void *p = a2 ? a2 : (void *)buf;

    func_1170B8(p, a0, D_0021BD68->f08, a1, a1[3]);
}
