/* LEVEL_17:04AD38 -- remet a zero l'enregistrement global D_001DC860
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001DC860;

void func_04AD38(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_001DC860;
            *(int *)&D_001DC860 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
