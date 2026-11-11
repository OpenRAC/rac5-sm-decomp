typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
    unsigned char b_114;
} Obj;
typedef struct { Obj *p; } Holder;
extern Holder D_0019C14C;
void func_000BF0(int i);
void func_001078(float f);
void CAMERA_PreUpdate__Fv(void)
{
    unsigned i;
    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        D_0019C14C.p->b_114 = 0;
        D_0019C14C.p->f_110 = 10000.0f;
        D_0019C14C.p->f_10C = 1.0f;
        func_001078(0.54977876f);
    }
}
