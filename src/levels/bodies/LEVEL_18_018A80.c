/* LEVEL_18:0x018A80 -- placement copy of LEVEL_16_019438.c: runs one frame-update pass over the level subsystems for the given mode. */
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

extern int D_0019C320;
extern int D_0019C32C;
extern unsigned char D_0019C311;
extern unsigned char D_0019C312;
extern unsigned char D_0019C313;
extern unsigned char D_0019C315;
extern int D_001A588C;
extern char D_001A5888;
extern char D_001ED0C0[];
extern Obj D_001E4410;
extern Obj D_001E7E00;

extern void func_07FEC8(int a);
extern void func_070420(int a);
extern void func_000BF0(unsigned a);
extern void func_087EA0(int a, int b, unsigned c, int d);
extern void func_089AF0(unsigned a);
extern int func_015ED8(void);
extern void func_084A48(int a);
extern void FOG_Update__FUi(unsigned a);
extern void func_08A9F0(int a);
extern void func_08AA48(int a, int b, unsigned c);
extern void func_090380(int a, int b);
extern void func_015BF8(void);
extern char *func_000E30(void);
extern void func_075240(char *a, int b);
extern Obj *func_111AA0(unsigned a);
extern void func_074E20(char *a, int b, Vec4 *v, int c);
extern void func_0714D0(void);
extern void func_081108(int a, int b);
extern void func_08DDB0(void);
extern void func_030438(void);
extern void func_015D48(void);
extern void func_071540(void);
extern void func_030458(void);
extern void func_0303D0(void);
extern void func_081F70(void);
extern void func_07FFC0(char *a, int b);
extern void func_0907C8(int a);
extern void func_072420(Vec3 v, float r);
extern void func_085370(unsigned a, float r);
extern void func_070C00(int a);
extern int func_0B8800(unsigned int value);
extern void func_09D868(void);

void func_018A80(unsigned a)
{
    Vec4 vec;
    Obj *o;
    Obj *p;
    Vec3 t;

    D_0019C320 = a;
    func_07FEC8(a & 0xFF);
    if (D_0019C315) {
        func_070420(1);
        func_000BF0(a);
        func_087EA0(0, 0x1D, a, 0);
        func_089AF0(a);
    }
    D_0019C32C = func_015ED8();
    D_001A5888 = 0;
    func_084A48(D_001A588C);
    FOG_Update__FUi(a);
    func_08A9F0(D_0019C320);
    func_08AA48(0, 1, a);
    func_090380(1, 2);
    func_015BF8();
    func_08AA48(2, 3, a);
    if (D_0019C311) {
        func_075240(func_000E30() + 0x30, D_0019C32C);
    }
    func_08AA48(4, 5, a);
    o = func_111AA0(a);
    if (o) {
        vec.x = o->pos.x;
        vec.y = o->pos.y;
        vec.z = o->pos.z;
        vec.w = 4.0f;
        func_074E20(func_000E30() + 0x30, D_0019C32C, &vec, 0);
    }
    func_08AA48(6, 7, a);
    func_0714D0();
    func_000BF0(a);
    if (D_0019C312) {
        func_081108(0, 1);
    }
    func_08DDB0();
    func_030438();
    func_08AA48(8, 9, a);
    if (D_0019C313) {
        func_015D48();
    }
    func_071540();
    if (D_0019C312) {
        func_081108(2, 3);
    }
    func_074E20(func_000E30() + 0x30, D_0019C32C, &vec, 1);
    func_030458();
    func_0303D0();
    if (D_0019C312) {
        func_081F70();
    }
    func_07FFC0(D_001ED0C0, a & 0xFF);
    func_0907C8(0);
    if (a == 0) {
        p = &D_001E4410;
    } else if (a == 1) {
        p = &D_001E7E00;
    } else {
        p = &D_001E4410;
    }
    if (p) {
        t = p->pos;
        func_072420(t, 32.0f);
    }
    func_08AA48(10, 11, a);
    func_085370(a, 0.03333333507180214f);
    func_08AA48(13, 14, a);
    func_08AA48(15, 19, a);
    func_08AA48(20, 23, a);
    func_08AA48(24, 27, a);
    func_070C00(4);
    func_08AA48(28, 29, a);
    func_090380(0, 2);
    func_0B8800(a);
    func_09D868();
}
