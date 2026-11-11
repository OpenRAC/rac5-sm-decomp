/* LEVEL_08:1F5D78 -- remet a zero l'enregistrement global D_003EAC18
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003EAC18;

void func_1F5D78(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003EAC18;
            *(int *)&D_003EAC18 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
