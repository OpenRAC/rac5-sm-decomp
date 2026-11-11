/* LEVEL_08:0x1822D0 -- placement copy of LEVEL_04_176AE0.c: updates an actor and triggers it when close to its target. */
typedef struct { char pad0[0x45]; unsigned char kind; } Info;
typedef struct { char pad0[0x30]; float f30; float f34; float f38; } Pos;
typedef struct { int pad0[5]; int f14; } Res;
typedef struct { char pad0[8]; Info *info; char pad0C[0x15C - 0x0C]; Pos *pos; } B;
typedef struct { int f0; } A;
typedef struct { char pad0[0x30]; float f30; char pad34[4]; float f38; char pad3C[0x54 - 0x3C]; A *a; B *b; } O;
extern Res *func_183058(O *o);
extern void func_0368F0(O *o);
extern void func_1FA760(int a, O *o, void *buf, float *p);
extern void func_182F10(void *p, O *o, void *buf, int x, int y);
extern void func_204DD8(O *o);

void func_1822D0(O *o)
{
    int buf[4];
    B *b;
    A *a;
    Res *r;
    Pos *c;
    float *p;
    int h;

    b = o->b;
    a = o->a;
    r = func_183058(o);
    h = a->f0;
    func_0368F0(o);
    c = b->pos;
    p = &c->f30;
    func_1FA760(h, o, buf, p);
    func_182F10((char *)b + 0xB4, o, buf, r->f14, 0);
    if (b->info->kind != 9) {
        float dx = c->f30 - o->f30;
        float dz = p[2] - o->f38;
        if (dx * dx + dz * dz <= 1.5625f)
            func_204DD8(o);
    }
}
