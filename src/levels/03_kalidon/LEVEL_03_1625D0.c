/* LEVEL_03:0x1625D0 -- two state setters that bind a handle to an actor and clear its busy flags. */
typedef struct { char pad[0x2C]; void *h; int f30; char pad2[0x48 - 0x34]; float t; } A;
typedef struct { char pad[0x40]; int v; } B;
typedef struct { char pad[0x54]; A *a; B *b; char pad2[0x64 - 0x5C]; int flags; } Obj;
extern void func_162010(Obj *o, int n);
extern int func_168260(void *self, Obj *owner, int extra, float x, float y);

void func_1625D0(Obj *o, float t)
{
    B *b = o->b;
    A *a = o->a;

    func_162010(o, 0x10);
    a->t = t;
    b->v = func_168260(a->h, o, (int)a, 0.5f, 1.0f);
    o->flags &= ~0x20;
    o->flags &= ~0x400;
}

void func_162660(Obj *o)
{
    B *b = o->b;
    A *a = o->a;

    b->v = func_168260(a->h, o, (int)a, 0.5f, 1.0f);
    func_162010(o, 0x12);
    o->flags &= ~0x20;
    o->flags &= ~0x400;
    a->f30 = 0;
}
