/* LEVEL_10:088660 -- remet a zero l'enregistrement global D_00244700
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00244700;

void func_088660(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00244700;
            *(int *)&D_00244700 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
