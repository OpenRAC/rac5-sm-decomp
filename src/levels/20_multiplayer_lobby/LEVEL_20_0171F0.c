/* LEVEL_20:0x0171F0 -- placement copy of LEVEL_16_019438.c: runs one frame-update pass over the level subsystems for the given mode. */
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

extern int D_000FD588;
extern int D_000FD594;
extern unsigned char D_000FD579;
extern unsigned char D_000FD57A;
extern unsigned char D_000FD57B;
extern unsigned char D_000FD57D;
extern int D_00106AEC;
extern char D_00106AE8;
extern char D_001445B0[];
extern Obj D_0013BA10;
extern Obj D_0013F400;

extern void func_06DEC8(int a);
extern void func_05FD60(int a);
extern void func_000BD8(unsigned a);
extern void func_075CF8(int a, int b, unsigned c, int d);
extern void func_0778E8(unsigned a);
extern int func_014778(void);
extern void func_072938(int a);
extern void FOG_Update__FUi(unsigned a);
extern void func_0787E8(int a);
extern void func_078840(int a, int b, unsigned c);
extern void func_07BA68(int a, int b);
extern void func_0144A0(void);
extern char *func_000D80(void);
extern void func_063F60(char *a, int b);
extern Obj *func_0E5858(unsigned a);
extern void func_063B40(char *a, int b, Vec4 *v, int c);
extern void func_060E10(void);
extern void func_06EFF8(int a, int b);
extern void func_0796A0(void);
extern void func_02C1F8(void);
extern void func_0145F0(void);
extern void func_060E80(void);
extern void func_02C218(void);
extern void func_02C190(void);
extern void func_06FE60(void);
extern void func_06DFC0(char *a, int b);
extern void func_07BEB0(int a);
extern void func_061D60(Vec3 center, float radius);
extern void func_073260(unsigned a, float r);
extern void func_060540(int a);
extern int func_0A3D58(unsigned int value);
extern void func_088F50(void);

void func_0171F0(unsigned a)
{
    Vec4 vec;
    Obj *o;
    Obj *p;
    Vec3 t;

    D_000FD588 = a;
    func_06DEC8(a & 0xFF);
    if (D_000FD57D) {
        func_05FD60(1);
        func_000BD8(a);
        func_075CF8(0, 0x1D, a, 0);
        func_0778E8(a);
    }
    D_000FD594 = func_014778();
    D_00106AE8 = 0;
    func_072938(D_00106AEC);
    FOG_Update__FUi(a);
    func_0787E8(D_000FD588);
    func_078840(0, 1, a);
    func_07BA68(1, 2);
    func_0144A0();
    func_078840(2, 3, a);
    if (D_000FD579) {
        func_063F60(func_000D80() + 0x30, D_000FD594);
    }
    func_078840(4, 5, a);
    o = func_0E5858(a);
    if (o) {
        vec.x = o->pos.x;
        vec.y = o->pos.y;
        vec.z = o->pos.z;
        vec.w = 4.0f;
        func_063B40(func_000D80() + 0x30, D_000FD594, &vec, 0);
    }
    func_078840(6, 7, a);
    func_060E10();
    func_000BD8(a);
    if (D_000FD57A) {
        func_06EFF8(0, 1);
    }
    func_0796A0();
    func_02C1F8();
    func_078840(8, 9, a);
    if (D_000FD57B) {
        func_0145F0();
    }
    func_060E80();
    if (D_000FD57A) {
        func_06EFF8(2, 3);
    }
    func_063B40(func_000D80() + 0x30, D_000FD594, &vec, 1);
    func_02C218();
    func_02C190();
    if (D_000FD57A) {
        func_06FE60();
    }
    func_06DFC0(D_001445B0, a & 0xFF);
    func_07BEB0(0);
    if (a == 0) {
        p = &D_0013BA10;
    } else if (a == 1) {
        p = &D_0013F400;
    } else {
        p = &D_0013BA10;
    }
    if (p) {
        t = p->pos;
        func_061D60(t, 32.0f);
    }
    func_078840(10, 11, a);
    func_073260(a, 0.03333333507180214f);
    func_078840(13, 14, a);
    func_078840(15, 19, a);
    func_078840(20, 23, a);
    func_078840(24, 27, a);
    func_060540(4);
    func_078840(28, 29, a);
    func_07BA68(0, 2);
    func_0A3D58(a);
    func_088F50();
}
