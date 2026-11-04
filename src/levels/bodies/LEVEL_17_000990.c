typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
    unsigned char b_114;
} Obj;
typedef struct { Obj *p; } Holder;
extern Holder D_0018E2CC;
void func_000BF0(int i);
void func_001008(float f);
void func_000990(void)
{
    unsigned i;
    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        D_0018E2CC.p->b_114 = 0;
        D_0018E2CC.p->f_110 = 10000.0f;
        D_0018E2CC.p->f_10C = 1.0f;
        func_001008(0.54977876f);
    }
}
