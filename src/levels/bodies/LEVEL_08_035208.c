/* LEVEL_08:0x035208 -- placement copy of LEVEL_04_031F90.c: sets up the fixed fog/light parameter sequence for an object, with the channel count chosen by a flag. */

struct Obj {
    char pad_00[0x20];
    float v_20[4];
    float v_30[4];
};

extern void func_040EE0(int a);
extern void func_041208(int a);
extern void func_003400(float a, float b);
extern void func_003748(int a, int b, float f, float g);
extern void func_0038E8(float *p, int a, int b, float f);
extern void func_003868(float f, float g, int a, int b);
extern void func_0038B8(float f, float g, int a, int b);
extern void func_003718(int a, int b, float f, float g);
extern void func_003190(float *p, int a, float f);
extern void func_003418(int a, int b, int c);
extern void func_003B88(float a, float b);
extern void func_003BA0(float a);
extern void func_01AB30(float *p);

void func_035208(struct Obj *o, int flag)
{
    int n;

    func_040EE0(1);
    func_041208(0);
    func_003400(0.0f, 0.0f);
    n = flag ? 3 : 0;
    func_003748(10, n, 2.25f, 1.0f);
    func_0038E8(o->v_20, 10, n, 0.3f);
    func_003868(0.0f, 1.0f, 10, n);
    func_0038B8(0.5f, 1.0f, 10, n);
    func_003718(10, n, 5.0f, 1.0f);
    func_003190(o->v_30, 0, 0.0f);
    func_003418(1, 0, 1);
    func_003B88(0.5f, 0.1f);
    func_003BA0(2.0f);
    func_01AB30(o->v_30);
}
