/* LEVEL_04:097F40 -- remet a zero l'enregistrement global D_002B2A80
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002B2A80;

void func_097F40(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_002B2A80;
            *(int *)&D_002B2A80 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
