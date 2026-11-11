typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
    unsigned char b_114;
} Obj;
typedef struct { Obj *p; } Holder;
extern Holder D_002078C8;
void func_001000(int i);
void func_001438(float f);
void func_000DB0(void)
{
    unsigned i;
    for (i = 0; i < 2; i++) {
        func_001000(i);
        D_002078C8.p->b_114 = 0;
        D_002078C8.p->f_110 = 10000.0f;
        D_002078C8.p->f_10C = 1.0f;
        func_001438(0.54977876f);
    }
}
