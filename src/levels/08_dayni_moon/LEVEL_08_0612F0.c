/* LEVEL_08:0x0612F0 -- placement copy of LEVEL_03_05A448.c: resets the global state block from an object position and a constants table, then runs the setup helpers. */
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
extern State D_002881A0;
extern Tab D_002585B8;
extern char D_0023D6F4;
extern void *func_195F98(Vec3 *outA, Vec3 *outB, Vec3 *pos);
extern void func_0611A0(float *out, struct B *b);
extern void func_196F40(void *a, void *b);
extern void func_1988F0(int a, int b);
extern void func_195718(void *a, void *b);

void func_0612F0(Obj *o)
{
    Vec3 m;
    Vec3 n;
    struct B *r;
    Vec3 *p;

    r = func_195F98(&m, &n, &o->p30);
    p = &D_002881A0.pos;
    *p = o->pos;
    D_002881A0.f14 = D_002585B8.a;
    D_002881A0.f18 = D_002585B8.b;
    D_002881A0.f1C = D_002585B8.c;
    if (r)
        func_0611A0(&p->x, r);
    D_0023D6F4 = 1;
    D_002881A0.b4 = 0;
    D_002881A0.b5 = 0;
    func_196F40(&m, &n);
    func_1988F0((int)&m, (int)&n);
    func_195718(&m, &n);
    D_002881A0.b20 = 0;
    D_002881A0.b21 = 0;
}
