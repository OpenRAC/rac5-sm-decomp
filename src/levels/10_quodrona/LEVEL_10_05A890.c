/* LEVEL_10:0x05A890 -- placement copy of LEVEL_03_05A448.c: resets the global state block from an object position and a constants table, then runs the setup helpers. */
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct Obj { char pad[0x20]; Vec3 pos; char pad2[4]; Vec3 p30; } Obj;
typedef struct State {
    char pad0[4];
    char b4;
    char b5;
    char pad6[2];
    Vec3 pos;
    float f14;
    float f18;
    float f1C;
    char b20;
    char b21;
} State;
typedef struct Tab { char pad[4]; float a; float b; char pad2[4]; float c; } Tab;
struct B;
extern State D_00242310;
extern Tab D_002178B8;
extern char D_001FD834;
extern void *func_17AF78(Vec3 *outA, Vec3 *outB, Vec3 *pos);
extern void func_05A740(float *out, struct B *b);
extern void func_17BF20(void *a, void *b);
extern void func_17D8D0(int a, int b);
extern void func_17A6F8(void *a, void *b);

void func_05A890(Obj *o)
{
    Vec3 m;
    Vec3 n;
    struct B *r;
    Vec3 *p;

    r = func_17AF78(&m, &n, &o->p30);
    p = &D_00242310.pos;
    *p = o->pos;
    D_00242310.f14 = D_002178B8.a;
    D_00242310.f18 = D_002178B8.b;
    D_00242310.f1C = D_002178B8.c;
    if (r)
        func_05A740(&p->x, r);
    D_001FD834 = 1;
    D_00242310.b4 = 0;
    D_00242310.b5 = 0;
    func_17BF20(&m, &n);
    func_17D8D0((int)&m, (int)&n);
    func_17A6F8(&m, &n);
    D_00242310.b20 = 0;
    D_00242310.b21 = 0;
}
