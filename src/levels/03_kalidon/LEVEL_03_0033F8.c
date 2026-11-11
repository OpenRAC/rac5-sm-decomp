/* LEVEL_03:0x0033F8 -- stores two floats in the current object. */
typedef struct {
    char pad[0x20C];
    float f_20C;
    char pad2[0x08];
    float f_218;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_002078D4;

void func_0033F8(float a, float b)
{
    D_002078D4.p->f_20C = a;
    D_002078D4.p->f_218 = b;
}
