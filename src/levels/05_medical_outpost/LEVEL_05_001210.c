/* LEVEL_05:0x001210 -- stores the pair of floats in the context. */
typedef struct {
    char pad[0x10C];
    float f_10C;
    float f_110;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_1DE5C8;

void func_001210(float a, float b)
{
    D_1DE5C8.p->f_10C = a;
    D_1DE5C8.p->f_110 = b;
}
