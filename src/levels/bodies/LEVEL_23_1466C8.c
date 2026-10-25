/* LEVEL_23:1466C8 -- remet a zero l'enregistrement global D_00363B78
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00363B78;

void func_1466C8(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00363B78;
            *(int *)&D_00363B78 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
