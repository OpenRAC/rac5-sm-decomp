/* LEVEL_15:0x0F0630 -- placement copy of LEVEL_01_131468.c: calls a routine with four floats from a global. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

extern Rec *D_0015B88C;

void func_065480(void *a, Rec *b, int c, int d, int e, int f, int g, int h,
                 float i, float j, float k, float l);

void func_0F0630(void *a0)
{
    Rec *p = D_0015B88C;

    if (p == 0) {
        return;
    }
    func_065480(a0, p, 0, 0, 0, 0, 0, 1,
                p->f14, p->f18, p->f1C, p->f20);
}
