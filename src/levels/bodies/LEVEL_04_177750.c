/* LEVEL_04:0x177750 -- initialises three global descriptor blocks on a magic request. */
typedef void (*Fn)(void);
typedef struct { int f0, f4, f8; float fC; } S1;
typedef struct { Fn f0; Fn f4; int f8; Fn fC; float f10; } S2;
typedef struct { float f0, f4, f8, fC; int f10; char *f14; char *f18; } S3;
extern S1 D_003B05A8;
extern S2 D_003B05B8;
extern S3 D_003B05D0;
extern float D_00227428;
extern float D_0023D618;
extern char D_0023A228[];
extern char D_0023A220[];
extern void func_1767A0(void);
extern void func_1DD3D8(void);
extern void func_1650E8(void);
extern void *memset(void *p, int v, unsigned n);

void func_177750(int a, int b)
{
    if (b == 0xFFFF && a) {
        D_003B05A8.f0 = 0;
        D_003B05A8.f4 = 0;
        D_003B05A8.f8 = 0;
        D_003B05A8.fC = 1.0f;
        memset(&D_003B05B8, 0, 0x14);
        D_003B05B8.f0 = func_1767A0;
        D_003B05B8.f4 = func_1DD3D8;
        D_003B05B8.fC = func_1650E8;
        D_003B05B8.f10 = D_00227428;
        memset(&D_003B05D0, 0, 0x1C);
        D_003B05D0.f0 = 10.0f;
        D_003B05D0.f4 = 0.8660254f;
        D_003B05D0.f8 = 60.0f;
        D_003B05D0.fC = D_0023D618 * 2.0f;
        D_003B05D0.f10 = 60;
        D_003B05D0.f14 = D_0023A228;
        D_003B05D0.f18 = D_0023A220;
    }
}
