/* LEVEL_17:017F28 -- remet a zero l'enregistrement global D_001CFB40
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001CFB40;

void func_017F28(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_001CFB40;
            *(int *)&D_001CFB40 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
