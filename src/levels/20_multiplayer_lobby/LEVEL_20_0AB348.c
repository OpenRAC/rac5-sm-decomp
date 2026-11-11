/* LEVEL_20:0AB348 -- remet a zero l'enregistrement global D_0019E250
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0019E250;

void func_0AB348(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0019E250;
            *(int *)&D_0019E250 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
