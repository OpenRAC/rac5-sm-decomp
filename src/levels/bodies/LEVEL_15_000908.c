typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
    unsigned char b_114;
} Obj;
typedef struct { Obj *p; } Holder;
extern Holder D_00143EB0;
void func_000B58(int i);
void func_000F68(float f);
void func_000908(void)
{
    unsigned i;
    for (i = 0; i < 2; i++) {
        func_000B58(i);
        D_00143EB0.p->b_114 = 0;
        D_00143EB0.p->f_110 = 10000.0f;
        D_00143EB0.p->f_10C = 1.0f;
        func_000F68(0.54977876f);
    }
}
