/* LEVEL_10:0x000B40 -- remet deux fois de suite l'etat d'un module
   global a sa valeur de depart : drapeau +0x114 a zero, butee +0x110 a
   10000, facteur +0x10C a 1, puis avance le module d'un pas.

   Le module est relu avant chaque magasin (le pointeur global est une
   structure), et les deux constantes flottantes sont hissees hors de la
   boucle dans $f20 / $f21. */

typedef struct {
    int pad[0x10C / 4];
    float f10C;
    float f110;
    char c114;
} Node;

typedef struct {
    Node *p;
} Holder;

extern Holder D_001F8248;

extern void func_000D90(int a0);
extern void func_0011A0(float v);

void func_000B40(void)
{
    unsigned i;

    for (i = 0; i < 2; i++) {
        func_000D90(i);
        D_001F8248.p->c114 = 0;
        D_001F8248.p->f110 = 10000.0f;
        D_001F8248.p->f10C = 1.0f;
        func_0011A0(0.549778759f);
    }
}
