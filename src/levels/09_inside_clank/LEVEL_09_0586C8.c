/* LEVEL_09:0x0586C8 -- placement copy of LEVEL_03_05A448.c: resets the global state block from an object position and a constants table, then runs the setup helpers. */
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
extern State D_00220690;
extern Tab D_001F8538;
extern char D_001DE634;
extern void *func_16C580(Vec3 *outA, Vec3 *outB, Vec3 *pos);
extern void func_058578(float *out, struct B *b);
extern void func_16D528(void *a, void *b);
extern void func_16EED8(int a, int b);
extern void func_16BD00(void *a, void *b);

void func_0586C8(Obj *o)
{
    Vec3 m;
    Vec3 n;
    struct B *r;
    Vec3 *p;

    r = func_16C580(&m, &n, &o->p30);
    p = &D_00220690.pos;
    *p = o->pos;
    D_00220690.f14 = D_001F8538.a;
    D_00220690.f18 = D_001F8538.b;
    D_00220690.f1C = D_001F8538.c;
    if (r)
        func_058578(&p->x, r);
    D_001DE634 = 1;
    D_00220690.b4 = 0;
    D_00220690.b5 = 0;
    func_16D528(&m, &n);
    func_16EED8((int)&m, (int)&n);
    func_16BD00(&m, &n);
    D_00220690.b20 = 0;
    D_00220690.b21 = 0;
}
