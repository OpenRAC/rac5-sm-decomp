/* LEVEL_16:0x167280 -- integrates a falling object's velocity and position over one step. */
typedef struct V3 { float x, y, z; } V3;
typedef struct M { float m[12]; } M;
typedef struct Sub { char pad0[4]; V3 vel; char pad10[0x1C - 0x10]; float f1C; } Sub;
typedef struct Obj { char pad0[0x30]; V3 pos; char pad3C[0x58 - 0x3C]; Sub *sub; } Obj;
extern int func_015558(int a, float f);
extern void func_167390(Obj *o);
extern void func_06F940(Obj *o, int a);
extern void func_1038C0(M *dst, char *src, float f);
extern void func_1040F8(Obj *a, Obj *b, M *c);
extern int func_1671C8(Obj *o);
extern float fabsf(float x);

int func_167280(Obj *o, float dt)
{
    M t;
    float f;
    Sub *s = o->sub;
    V3 *vel;
    V3 *pos;

    if (func_015558(0, o->pos.y)) {
        func_167390(o);
        func_06F940(o, 1);
        return 0;
    }
    f = s->f1C;
    if (fabsf(f) > 9.999999747378752e-05f) {
        func_1038C0(&t, (char *)s + 0x10, f);
        func_1040F8(o, o, &t);
    }
    vel = &s->vel;
    pos = &o->pos;
    s->vel.y += dt * -9.800000190734863f;
    pos->x += vel->x * dt;
    pos->y += vel->y * dt;
    pos->z += vel->z * dt;
    return func_1671C8(o) != 0;
}
