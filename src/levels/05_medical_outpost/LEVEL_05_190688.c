/* LEVEL_05:0x190688 -- raccorde un module au corps quand sa signature
   vaut 0xECFD0651 : le service mesure un flottant, on le publie en
   +0x2C et, s'il n'est pas -1.0, on lie l'objet et arme le drapeau
   +0x4C.

   Le magasin +0x2C precede le test et tombe dans le cran de retard du
   bc1t. */

typedef struct {
    int p00;
    int p04;
    int f08;
    int p0C;
    int p10;
    int p14;
    int p18;
    int p1C;
    int p20;
    int p24;
    int p28;
    float f2C;
    int p30;
    char pad[0x4C - 0x34];
    char c4C;
} Node;

typedef struct {
    int p00;
    int p04;
    int p08;
    int p0C;
    int p10;
    int p14;
    int p18;
    int p1C;
    int p20;
    int sig;
} Head;

extern float func_190610(void *a0);

void func_190688(void *a0, void *a1)
{
    Head *h = *(Head **)((char *)a0 + 0x40);
    Node *p;
    float f;

    if (h->sig != 0xECFD0651) {
        return;
    }
    p = *(Node **)((char *)a0 + 0x58);
    f = func_190610(a1);
    p->f2C = f;
    if (f != -1.0f) {
        p->f08 = (int)a1;
        p->c4C = 1;
    }
}
