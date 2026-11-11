/* LEVEL_01:029E10 -- remet a zero l'enregistrement global D_00230F88
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00230F88;

void func_029E10(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00230F88;
            *(int *)&D_00230F88 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
