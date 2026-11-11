/* LEVEL_09:1A27A8 -- remet a zero l'enregistrement global D_0037FB28
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037FB28;

void func_1A27A8(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0037FB28;
            *(int *)&D_0037FB28 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
