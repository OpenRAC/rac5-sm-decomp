/* LEVEL_20:0x002F88 -- stores two floats in the current object. */
typedef struct {
    char pad[0x20C];
    float f_20C;
    char pad2[0x08];
    float f_218;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_000FD3C4;

void func_002F88(float a, float b)
{
    D_000FD3C4.p->f_20C = a;
    D_000FD3C4.p->f_218 = b;
}
