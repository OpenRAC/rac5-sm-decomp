typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
    unsigned char b_114;
} Obj;
typedef struct { Obj *p; } Holder;
extern Holder D_0014E5C8;
void func_000E08(int i);
void func_001180(float f);
void CAMERA_PreUpdate__Fv(void)
{
    unsigned i;
    for (i = 0; i < 2; i++) {
        func_000E08(i);
        D_0014E5C8.p->b_114 = 0;
        D_0014E5C8.p->f_110 = 10000.0f;
        D_0014E5C8.p->f_10C = 1.0f;
        func_001180(0.54977876f);
    }
}
