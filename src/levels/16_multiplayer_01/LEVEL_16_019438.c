/* LEVEL_16:0x019438 -- runs one frame-update pass over the level subsystems for the given mode. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad0[0x30];
    Vec3 pos;
} Obj;

extern int D_0019AEA0;
extern int D_0019AEAC;
extern unsigned char D_0019AE91;
extern unsigned char D_0019AE92;
extern unsigned char D_0019AE93;
extern unsigned char D_0019AE95;
extern int D_001A440C;
extern char D_001A4408;
extern char D_001ECD40[];
extern Obj D_001E4090;
extern Obj D_001E7A80;

extern void func_080580(int a);
extern void func_070D70(int a);
extern void func_000BF0(unsigned a);
extern void func_088558(int a, int b, unsigned c, int d);
extern void func_08A1A8(unsigned a);
extern int func_0167C8(void);
extern void func_085100(int a);
extern void FOG_Update__FUi(unsigned a);
extern void func_08B0A8(int a);
extern void func_08B100(int a, int b, unsigned c);
extern void func_091370(int a, int b);
extern void func_0164E8(void);
extern char *func_000DC0(void);
extern void func_075BD0(char *a, int b);
extern Obj *func_112CE8(unsigned a);
extern void func_0757B0(char *a, int b, Vec4 *v, int c);
extern void func_071E20(void);
extern void func_0817C0(int a, int b);
extern void func_08ED98(void);
extern void func_031B68(void);
extern void func_016638(void);
extern void func_071E90(void);
extern void func_031B88(void);
extern void func_031B00(void);
extern void func_082628(void);
extern void func_080678(char *a, int b);
extern void func_0917B8(int a);
extern void func_072D70(Vec3 v, float r);
extern void func_085A28(unsigned a, float r);
extern void func_071550(int a);
extern int func_0B9828(unsigned int value);
extern void func_09E858(void);

void func_019438(unsigned a)
{
    Vec4 vec;
    Obj *o;
    Obj *p;
    Vec3 t;

    D_0019AEA0 = a;
    func_080580(a & 0xFF);
    if (D_0019AE95) {
        func_070D70(1);
        func_000BF0(a);
        func_088558(0, 0x1D, a, 0);
        func_08A1A8(a);
    }
    D_0019AEAC = func_0167C8();
    D_001A4408 = 0;
    func_085100(D_001A440C);
    FOG_Update__FUi(a);
    func_08B0A8(D_0019AEA0);
    func_08B100(0, 1, a);
    func_091370(1, 2);
    func_0164E8();
    func_08B100(2, 3, a);
    if (D_0019AE91) {
        func_075BD0(func_000DC0() + 0x30, D_0019AEAC);
    }
    func_08B100(4, 5, a);
    o = func_112CE8(a);
    if (o) {
        vec.x = o->pos.x;
        vec.y = o->pos.y;
        vec.z = o->pos.z;
        vec.w = 4.0f;
        func_0757B0(func_000DC0() + 0x30, D_0019AEAC, &vec, 0);
    }
    func_08B100(6, 7, a);
    func_071E20();
    func_000BF0(a);
    if (D_0019AE92) {
        func_0817C0(0, 1);
    }
    func_08ED98();
    func_031B68();
    func_08B100(8, 9, a);
    if (D_0019AE93) {
        func_016638();
    }
    func_071E90();
    if (D_0019AE92) {
        func_0817C0(2, 3);
    }
    func_0757B0(func_000DC0() + 0x30, D_0019AEAC, &vec, 1);
    func_031B88();
    func_031B00();
    if (D_0019AE92) {
        func_082628();
    }
    func_080678(D_001ECD40, a & 0xFF);
    func_0917B8(0);
    if (a == 0) {
        p = &D_001E4090;
    } else if (a == 1) {
        p = &D_001E7A80;
    } else {
        p = &D_001E4090;
    }
    if (p) {
        t = p->pos;
        func_072D70(t, 32.0f);
    }
    func_08B100(10, 11, a);
    func_085A28(a, 0.03333333507180214f);
    func_08B100(13, 14, a);
    func_08B100(15, 19, a);
    func_08B100(20, 23, a);
    func_08B100(24, 27, a);
    func_071550(4);
    func_08B100(28, 29, a);
    func_091370(0, 2);
    func_0B9828(a);
    func_09E858();
}
