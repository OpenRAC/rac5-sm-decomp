/* LEVEL_19:0x019138 -- placement copy of LEVEL_16_019438.c: runs one frame-update pass over the level subsystems for the given mode. */
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

extern int D_0019C020;
extern int D_0019C02C;
extern unsigned char D_0019C011;
extern unsigned char D_0019C012;
extern unsigned char D_0019C013;
extern unsigned char D_0019C015;
extern int D_001A558C;
extern char D_001A5588;
extern char D_001ECEC0[];
extern Obj D_001E4210;
extern Obj D_001E7C00;

extern void func_080A30(int a);
extern void func_070EB8(int a);
extern void func_000BF0(unsigned a);
extern void func_088A08(int a, int b, unsigned c, int d);
extern void func_08A658(unsigned a);
extern int func_016588(void);
extern void func_0855B0(int a);
extern void FOG_Update__FUi(unsigned a);
extern void func_08B558(int a);
extern void func_08B5B0(int a, int b, unsigned c);
extern void func_090C00(int a, int b);
extern void func_0162A8(void);
extern char *func_000DC0(void);
extern void func_075D50(char *a, int b);
extern Obj *func_113490(unsigned a);
extern void func_075930(char *a, int b, Vec4 *v, int c);
extern void func_071F68(void);
extern void func_081C70(int a, int b);
extern void func_08E630(void);
extern void func_030EF8(void);
extern void func_0163F8(void);
extern void func_071FD8(void);
extern void func_030F18(void);
extern void func_030E90(void);
extern void func_082AD8(void);
extern void func_080B28(char *a, int b);
extern void func_091048(int a);
extern void func_072EB8(Vec3 v, float r);
extern void func_085ED8(unsigned a, float r);
extern void func_071698(int a);
extern int func_0B9100(unsigned int value);
extern void func_09E0E8(void);

void func_019138(unsigned a)
{
    Vec4 vec;
    Obj *o;
    Obj *p;
    Vec3 t;

    D_0019C020 = a;
    func_080A30(a & 0xFF);
    if (D_0019C015) {
        func_070EB8(1);
        func_000BF0(a);
        func_088A08(0, 0x1D, a, 0);
        func_08A658(a);
    }
    D_0019C02C = func_016588();
    D_001A5588 = 0;
    func_0855B0(D_001A558C);
    FOG_Update__FUi(a);
    func_08B558(D_0019C020);
    func_08B5B0(0, 1, a);
    func_090C00(1, 2);
    func_0162A8();
    func_08B5B0(2, 3, a);
    if (D_0019C011) {
        func_075D50(func_000DC0() + 0x30, D_0019C02C);
    }
    func_08B5B0(4, 5, a);
    o = func_113490(a);
    if (o) {
        vec.x = o->pos.x;
        vec.y = o->pos.y;
        vec.z = o->pos.z;
        vec.w = 4.0f;
        func_075930(func_000DC0() + 0x30, D_0019C02C, &vec, 0);
    }
    func_08B5B0(6, 7, a);
    func_071F68();
    func_000BF0(a);
    if (D_0019C012) {
        func_081C70(0, 1);
    }
    func_08E630();
    func_030EF8();
    func_08B5B0(8, 9, a);
    if (D_0019C013) {
        func_0163F8();
    }
    func_071FD8();
    if (D_0019C012) {
        func_081C70(2, 3);
    }
    func_075930(func_000DC0() + 0x30, D_0019C02C, &vec, 1);
    func_030F18();
    func_030E90();
    if (D_0019C012) {
        func_082AD8();
    }
    func_080B28(D_001ECEC0, a & 0xFF);
    func_091048(0);
    if (a == 0) {
        p = &D_001E4210;
    } else if (a == 1) {
        p = &D_001E7C00;
    } else {
        p = &D_001E4210;
    }
    if (p) {
        t = p->pos;
        func_072EB8(t, 32.0f);
    }
    func_08B5B0(10, 11, a);
    func_085ED8(a, 0.03333333507180214f);
    func_08B5B0(13, 14, a);
    func_08B5B0(15, 19, a);
    func_08B5B0(20, 23, a);
    func_08B5B0(24, 27, a);
    func_071698(4);
    func_08B5B0(28, 29, a);
    func_090C00(0, 2);
    func_0B9100(a);
    func_09E0E8();
}
