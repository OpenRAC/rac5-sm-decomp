/* LEVEL_07:1BE958 -- remet a zero l'enregistrement global D_003ADC98
   (trois mots et un flottant) quand le 2e argument vaut 0xFFFF et que le 1er
   n'est pas nul. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003ADC98;

void func_1BE958(int a0, int a1)
{
    Rec *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003ADC98;
            *(int *)&D_003ADC98 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
