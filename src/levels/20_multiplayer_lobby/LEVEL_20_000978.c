typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
    unsigned char b_114;
} Obj;
typedef struct { Obj *p; } Holder;
extern Holder D_000FD3B4;
void func_000BD8(int i);
void func_000FC8(float f);
void func_000978(void)
{
    unsigned i;
    for (i = 0; i < 2; i++) {
        func_000BD8(i);
        D_000FD3B4.p->b_114 = 0;
        D_000FD3B4.p->f_110 = 10000.0f;
        D_000FD3B4.p->f_10C = 1.0f;
        func_000FC8(0.54977876f);
    }
}
