/* LEVEL_07:0x05C7B8 -- placement copy of LEVEL_03_05A448.c: resets the global state block from an object position and a constants table, then runs the setup helpers. */
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
extern State D_0024E810;
extern Tab D_00223638;
extern char D_00208B34;
extern void *func_1859B0(Vec3 *outA, Vec3 *outB, Vec3 *pos);
extern void func_05C668(float *out, struct B *b);
extern void func_186958(void *a, void *b);
extern void func_188308(int a, int b);
extern void func_185130(void *a, void *b);

void func_05C7B8(Obj *o)
{
    Vec3 m;
    Vec3 n;
    struct B *r;
    Vec3 *p;

    r = func_1859B0(&m, &n, &o->p30);
    p = &D_0024E810.pos;
    *p = o->pos;
    D_0024E810.f14 = D_00223638.a;
    D_0024E810.f18 = D_00223638.b;
    D_0024E810.f1C = D_00223638.c;
    if (r)
        func_05C668(&p->x, r);
    D_00208B34 = 1;
    D_0024E810.b4 = 0;
    D_0024E810.b5 = 0;
    func_186958(&m, &n);
    func_188308((int)&m, (int)&n);
    func_185130(&m, &n);
    D_0024E810.b20 = 0;
    D_0024E810.b21 = 0;
}
