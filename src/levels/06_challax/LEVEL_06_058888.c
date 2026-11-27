/* LEVEL_06:0x058888 -- placement copy of LEVEL_03_05A448.c: resets the global state block from an object position and a constants table, then runs the setup helpers. */
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
extern State D_00225C90;
extern Tab D_001FD7B8;
extern char D_001E3734;
extern void *func_168948(Vec3 *outA, Vec3 *outB, Vec3 *pos);
extern void func_058738(float *out, struct B *b);
extern void func_1698F0(void *a, void *b);
extern void func_16B2A0(int a, int b);
extern void func_1680C8(void *a, void *b);

void func_058888(Obj *o)
{
    Vec3 m;
    Vec3 n;
    struct B *r;
    Vec3 *p;

    r = func_168948(&m, &n, &o->p30);
    p = &D_00225C90.pos;
    *p = o->pos;
    D_00225C90.f14 = D_001FD7B8.a;
    D_00225C90.f18 = D_001FD7B8.b;
    D_00225C90.f1C = D_001FD7B8.c;
    if (r)
        func_058738(&p->x, r);
    D_001E3734 = 1;
    D_00225C90.b4 = 0;
    D_00225C90.b5 = 0;
    func_1698F0(&m, &n);
    func_16B2A0((int)&m, (int)&n);
    func_1680C8(&m, &n);
    D_00225C90.b20 = 0;
    D_00225C90.b21 = 0;
}
