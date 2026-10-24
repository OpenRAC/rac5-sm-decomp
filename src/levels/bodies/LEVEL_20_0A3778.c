/* LEVEL_20:0A3778 -- remet a zero l'enregistrement global D_0019D858
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0019D858;

void func_0A3778(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0019D858;
            *(int *)&D_0019D858 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
