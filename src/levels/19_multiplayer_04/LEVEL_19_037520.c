/* LEVEL_19:0x037520 -- placement copy of LEVEL_16_038290.c: eases one value of the object up to a cap and another down towards zero, then when the global mode is 0x10 and no query blocks it, starts the follow-up effect. */
typedef struct {
    char pad000[0xF4];
    int wF4;
    char pad0F8[0x96C - 0xF8];
    float f96C;
    float f970;
    char pad974[0xB28 - 0x974];
    float fB28;
    float fB2C;
} Obj;

extern int D_001D16A0;
extern int func_1135A8(void);
extern void func_11D150(int a, int b, int c, float f0, float f1);

void func_037520(Obj *o)
{
    float a;
    float b;
    float z;
    float *p;
    float *q;
    float *pb;
    float *pz;

    a = o->f96C + o->f970 * 0.33000001311302185f;
    p = (a < o->f970) ? &a : &o->f970;
    o->f96C = *p;
    b = o->fB28 - 50.0f;
    z = 0.0f;
    pb = &b;
    pz = &z;
    q = (z < b) ? pb : pz;
    o->fB28 = *q;
    if (D_001D16A0 == 0x10) {
        if (func_1135A8() == 0) {
            func_11D150(o->wF4 - 1, 1, 0x1E, o->fB2C, o->fB28);
        }
    }
}
