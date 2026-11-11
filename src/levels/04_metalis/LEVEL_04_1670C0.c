/* LEVEL_04:0x1670C0 -- tears the object down: releases its linked record, then the two handles held in its sub-record, then the embedded part. */
struct Outer;
struct S1E7138;

struct Part {
    int pad0;
    char *h1;
    char *h2;
};

struct Sub {
    char pad0[0x50];
    struct Part part;
    char pad5C[4];
};

struct Obj {
    char pad0[0x54];
    struct Outer **f54;
    struct Sub *f58;
};

extern void func_1D4E30(struct Outer *a0, int a1);
extern void func_07FAE8(char *a0, int a1);
extern void func_083F98(char *record);
extern void func_1E7138(struct S1E7138 *p);

void func_1670C0(struct Obj *o)
{
    struct Sub *s = o->f58;
    struct Part *p = &s->part;

    func_1D4E30(*o->f54, (int)o);
    if (p->h1 != 0) {
        func_07FAE8(p->h1, 1);
        p->h1 = 0;
    }
    if (p->h2 != 0) {
        func_083F98(p->h2);
        p->h2 = 0;
    }
    func_1E7138((struct S1E7138 *)((char *)s + 0x5C));
}
