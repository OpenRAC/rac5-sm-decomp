/* LEVEL_17:0x018DB8 -- placement copy of LEVEL_16_019438.c: runs one frame-update pass over the level subsystems for the given mode. */
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

extern int D_0018E4A0;
extern int D_0018E4AC;
extern unsigned char D_0018E491;
extern unsigned char D_0018E492;
extern unsigned char D_0018E493;
extern unsigned char D_0018E495;
extern int D_00197A0C;
extern char D_00197A08;
extern char D_001DE040[];
extern Obj D_001D5390;
extern Obj D_001D8D80;

extern void func_080FC0(int a);
extern void func_0714A0(int a);
extern void func_000BF0(unsigned a);
extern void func_088F98(int a, int b, unsigned c, int d);
extern void func_08ABE8(unsigned a);
extern int func_0161E8(void);
extern void func_085B40(int a);
extern void FOG_Update__FUi(unsigned a);
extern void func_08BAE8(int a);
extern void func_08BB40(int a, int b, unsigned c);
extern void func_090868(int a, int b);
extern void func_015F08(void);
extern char *func_000DC0(void);
extern void func_076338(char *a, int b);
extern Obj *func_112478(unsigned a);
extern void func_075F18(char *a, int b, Vec4 *v, int c);
extern void func_072550(void);
extern void func_082200(int a, int b);
extern void func_08E290(void);
extern void func_0314B0(void);
extern void func_016058(void);
extern void func_0725C0(void);
extern void func_0314D0(void);
extern void func_031448(void);
extern void func_083068(void);
extern void func_0810B8(char *a, int b);
extern void func_090CB0(int a);
extern void func_0734A0(Vec3 center, float radius);
extern void func_086468(unsigned a, float r);
extern void func_071C80(int a);
extern int func_0B8D68(unsigned int value);
extern void func_09DD50(void);

void func_018DB8(unsigned a)
{
    Vec4 vec;
    Obj *o;
    Obj *p;
    Vec3 t;

    D_0018E4A0 = a;
    func_080FC0(a & 0xFF);
    if (D_0018E495) {
        func_0714A0(1);
        func_000BF0(a);
        func_088F98(0, 0x1D, a, 0);
        func_08ABE8(a);
    }
    D_0018E4AC = func_0161E8();
    D_00197A08 = 0;
    func_085B40(D_00197A0C);
    FOG_Update__FUi(a);
    func_08BAE8(D_0018E4A0);
    func_08BB40(0, 1, a);
    func_090868(1, 2);
    func_015F08();
    func_08BB40(2, 3, a);
    if (D_0018E491) {
        func_076338(func_000DC0() + 0x30, D_0018E4AC);
    }
    func_08BB40(4, 5, a);
    o = func_112478(a);
    if (o) {
        vec.x = o->pos.x;
        vec.y = o->pos.y;
        vec.z = o->pos.z;
        vec.w = 4.0f;
        func_075F18(func_000DC0() + 0x30, D_0018E4AC, &vec, 0);
    }
    func_08BB40(6, 7, a);
    func_072550();
    func_000BF0(a);
    if (D_0018E492) {
        func_082200(0, 1);
    }
    func_08E290();
    func_0314B0();
    func_08BB40(8, 9, a);
    if (D_0018E493) {
        func_016058();
    }
    func_0725C0();
    if (D_0018E492) {
        func_082200(2, 3);
    }
    func_075F18(func_000DC0() + 0x30, D_0018E4AC, &vec, 1);
    func_0314D0();
    func_031448();
    if (D_0018E492) {
        func_083068();
    }
    func_0810B8(D_001DE040, a & 0xFF);
    func_090CB0(0);
    if (a == 0) {
        p = &D_001D5390;
    } else if (a == 1) {
        p = &D_001D8D80;
    } else {
        p = &D_001D5390;
    }
    if (p) {
        t = p->pos;
        func_0734A0(t, 32.0f);
    }
    func_08BB40(10, 11, a);
    func_086468(a, 0.03333333507180214f);
    func_08BB40(13, 14, a);
    func_08BB40(15, 19, a);
    func_08BB40(20, 23, a);
    func_08BB40(24, 27, a);
    func_071C80(4);
    func_08BB40(28, 29, a);
    func_090868(0, 2);
    func_0B8D68(a);
    func_09DD50();
}
