/* LEVEL_01:0x131468 -- calls a routine with four floats from a global. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

extern Rec *D_00206F2C;

void func_0809D0(void *a, Rec *b, int c, int d, int e, int f, int g, int h,
                 float i, float j, float k, float l);

void func_131468(void *a0)
{
    Rec *p = D_00206F2C;

    if (p == 0) {
        return;
    }
    func_0809D0(a0, p, 0, 0, 0, 0, 0, 1,
                p->f14, p->f18, p->f1C, p->f20);
}
