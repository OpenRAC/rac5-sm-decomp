/* LEVEL_16:0x003740 -- stores the pair of floats in the context. */
typedef struct {
    char pad[0x2C0];
    float f_2C0;
    float f_2C4;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_19ACDC;

void func_003740(float a, float b)
{
    D_19ACDC.p->f_2C0 = a;
    D_19ACDC.p->f_2C4 = b;
}
