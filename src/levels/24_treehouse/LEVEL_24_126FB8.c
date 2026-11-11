/* LEVEL_24:0x126FB8 -- calls a routine with four floats from a global. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

extern Rec *D_001D7BB0;

void func_07B0B0(void *a, Rec *b, int c, int d, int e, int f, int g, int h,
                 float i, float j, float k, float l);

void func_126FB8(void *a0)
{
    Rec *p = D_001D7BB0;

    if (p == 0) {
        return;
    }
    func_07B0B0(a0, p, 0, 0, 0, 0, 0, 1,
                p->f14, p->f18, p->f1C, p->f20);
}
