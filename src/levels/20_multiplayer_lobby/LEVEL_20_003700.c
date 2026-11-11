/* LEVEL_20:0x003700 -- stores two floats in the current object. */
typedef struct {
    char pad[0x2C0];
    float f_2C0;
    char pad2[0x00];
    float f_2C4;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_000FD3C4;

void func_003700(float a, float b)
{
    D_000FD3C4.p->f_2C0 = a;
    D_000FD3C4.p->f_2C4 = b;
}
