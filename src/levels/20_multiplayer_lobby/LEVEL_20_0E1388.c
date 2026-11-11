/* LEVEL_20:0x0E1388 -- placement copy of LEVEL_01_131468.c: calls a routine with four floats from a global. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

extern Rec *D_001170FC;

void func_0624D8(void *a, Rec *b, int c, int d, int e, int f, int g, int h,
                 float i, float j, float k, float l);

void func_0E1388(void *a0)
{
    Rec *p = D_001170FC;

    if (p == 0) {
        return;
    }
    func_0624D8(a0, p, 0, 0, 0, 0, 0, 1,
                p->f14, p->f18, p->f1C, p->f20);
}
