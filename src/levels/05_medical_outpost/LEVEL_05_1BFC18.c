/* LEVEL_05:1BFC18 -- remet a zero l'enregistrement global D_0038FC68
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0038FC68;

void func_1BFC18(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0038FC68;
            *(int *)&D_0038FC68 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
