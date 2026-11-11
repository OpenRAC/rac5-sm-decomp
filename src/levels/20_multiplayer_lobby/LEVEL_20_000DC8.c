typedef struct {
    char pad_00[0x10C];
    float f_10C;
    float f_110;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_000FD3B4;

void func_000DC8(float a, float b)
{
    D_000FD3B4.p->f_10C = a;
    D_000FD3B4.p->f_110 = b;
}
