typedef struct { char pad0[0x15C]; float f_15C; float f_160; char pad1[0x52]; unsigned char b_1B6; } Timer;
typedef struct { char pad[0x108]; unsigned char b_108; } Obj;
extern Obj D_0024F950;
extern Timer D_00253788;
extern int func_063C80(void);
extern void func_063298(void *a0, unsigned char a1, int a2);
extern void func_04F430(void *a0, int a1, int a2, int a3, float f12, float f13);
void func_0615C0(void)
{
    Obj *o = &D_0024F950;
    if (func_063C80() != 0) {
        func_063298(o, o->b_108, 5);
        func_04F430(o, 5, 0, 1, 0.125f, 0.0f);
        D_00253788.f_160 = 160.0031890869140625f;
        D_00253788.f_15C = 160.0031890869140625f;
        D_00253788.b_1B6 = 5;
    }
}
