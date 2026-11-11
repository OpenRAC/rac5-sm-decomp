typedef struct { char pad0[0x15C]; float f_15C; float f_160; char pad1[0x52]; unsigned char b_1B6; } Timer;
typedef struct { char pad[0x108]; unsigned char b_108; } Obj;
extern Obj D_00220E40;
extern Timer D_00224C78;
extern int func_05FE98(void);
extern void func_05F4B0(void *a0, unsigned char a1, int a2);
extern void func_04B6A0(void *a0, int a1, int a2, int a3, float f12, float f13);
void func_05D7D8(void)
{
    Obj *o = &D_00220E40;
    if (func_05FE98() != 0) {
        func_05F4B0(o, o->b_108, 5);
        func_04B6A0(o, 5, 0, 1, 0.125f, 0.0f);
        D_00224C78.f_160 = 160.0031890869140625f;
        D_00224C78.f_15C = 160.0031890869140625f;
        D_00224C78.b_1B6 = 5;
    }
}
