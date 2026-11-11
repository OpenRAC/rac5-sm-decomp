/* LEVEL_09:13B880 -- remet a zero l'enregistrement global D_00379048
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00379048;

void func_13B880(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00379048;
            *(int *)&D_00379048 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
