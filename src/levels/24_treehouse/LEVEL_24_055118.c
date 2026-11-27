/* LEVEL_24:0x055118 -- placement copy of LEVEL_03_05A448.c: resets the global state block from an object position and a constants table, then runs the setup helpers. */
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
extern State D_00204E10;
extern Tab D_001DF6B8;
extern char D_001C54B4;
extern void *func_15EA80(Vec3 *outA, Vec3 *outB, Vec3 *pos);
extern void func_054FC8(float *out, struct B *b);
extern void func_15FA28(void *a, void *b);
extern void func_1613C8(int a, int b);
extern void func_15E200(void *a, void *b);

void func_055118(Obj *o)
{
    Vec3 m;
    Vec3 n;
    struct B *r;
    Vec3 *p;

    r = func_15EA80(&m, &n, &o->p30);
    p = &D_00204E10.pos;
    *p = o->pos;
    D_00204E10.f14 = D_001DF6B8.a;
    D_00204E10.f18 = D_001DF6B8.b;
    D_00204E10.f1C = D_001DF6B8.c;
    if (r)
        func_054FC8(&p->x, r);
    D_001C54B4 = 1;
    D_00204E10.b4 = 0;
    D_00204E10.b5 = 0;
    func_15FA28(&m, &n);
    func_1613C8((int)&m, (int)&n);
    func_15E200(&m, &n);
    D_00204E10.b20 = 0;
    D_00204E10.b21 = 0;
}
