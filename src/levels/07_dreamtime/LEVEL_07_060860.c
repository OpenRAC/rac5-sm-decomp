typedef struct { char pad0[0x15C]; float f_15C; float f_160; char pad1[0x52]; unsigned char b_1B6; } Timer;
typedef struct { char pad[0x108]; unsigned char b_108; } Obj;
extern Obj D_0024AA40;
extern Timer D_0024E878;
extern int func_062F20(void);
extern void func_062538(void *a0, unsigned char a1, int a2);
extern void func_04E040(void *a0, int a1, int a2, int a3, float f12, float f13);
void func_060860(void)
{
    Obj *o = &D_0024AA40;
    if (func_062F20() != 0) {
        func_062538(o, o->b_108, 5);
        func_04E040(o, 5, 0, 1, 0.125f, 0.0f);
        D_0024E878.f_160 = 160.0031890869140625f;
        D_0024E878.f_15C = 160.0031890869140625f;
        D_0024E878.b_1B6 = 5;
    }
}
