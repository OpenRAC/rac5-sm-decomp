/* LEVEL_06:0x001210 -- stores two floats in the current object. */
typedef struct {
    char pad[0x10C];
    float f_10C;
    char pad2[0x00];
    float f_110;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001DE148;

void func_001210(float a, float b)
{
    D_001DE148.p->f_10C = a;
    D_001DE148.p->f_110 = b;
}
