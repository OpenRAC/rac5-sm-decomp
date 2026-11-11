typedef struct { char pad0[0x15C]; float f_15C; float f_160; char pad1[0x52]; unsigned char b_1B6; } Timer;
typedef struct { char pad[0x108]; unsigned char b_108; } Obj;
extern Obj D_00201040;
extern Timer D_00204E78;
extern int func_05B880(void);
extern void func_05AE98(void *a0, unsigned char a1, int a2);
extern void func_0469F8(void *a0, int a1, int a2, int a3, float f12, float f13);
void func_0591C0(void)
{
    Obj *o = &D_00201040;
    if (func_05B880() != 0) {
        func_05AE98(o, o->b_108, 5);
        func_0469F8(o, 5, 0, 1, 0.125f, 0.0f);
        D_00204E78.f_160 = 160.0031890869140625f;
        D_00204E78.f_15C = 160.0031890869140625f;
        D_00204E78.b_1B6 = 5;
    }
}
