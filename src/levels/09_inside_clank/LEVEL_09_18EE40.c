/* LEVEL_09:18EE40 -- remet a zero l'enregistrement global D_0037E928
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037E928;

void func_18EE40(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0037E928;
            *(int *)&D_0037E928 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
