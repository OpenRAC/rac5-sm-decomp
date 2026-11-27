/* LEVEL_03:0x05A448 -- resets the global state block from an object position and a constants table, then runs the setup helpers. */
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
extern State D_00253D90;
extern Tab D_00227838;
extern char D_0020CEB4;
extern void *func_1789C0(Vec3 *outA, Vec3 *outB, Vec3 *pos);
extern void func_05A2F8(float *out, struct B *b);
extern void func_179968(void *a, void *b);
extern void func_17B318(int a, int b);
extern void func_178140(void *a, void *b);

void func_05A448(Obj *o)
{
    Vec3 m;
    Vec3 n;
    struct B *r;
    Vec3 *p;

    r = func_1789C0(&m, &n, &o->p30);
    p = &D_00253D90.pos;
    *p = o->pos;
    D_00253D90.f14 = D_00227838.a;
    D_00253D90.f18 = D_00227838.b;
    D_00253D90.f1C = D_00227838.c;
    if (r)
        func_05A2F8(&p->x, r);
    D_0020CEB4 = 1;
    D_00253D90.b4 = 0;
    D_00253D90.b5 = 0;
    func_179968(&m, &n);
    func_17B318((int)&m, (int)&n);
    func_178140(&m, &n);
    D_00253D90.b20 = 0;
    D_00253D90.b21 = 0;
}
