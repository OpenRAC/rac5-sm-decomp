/* LEVEL_04:0x17B468 -- tears the object down: releases its linked record, runs the shared teardown, releases the two handles held in its sub-record, the embedded part and the trailing handle. */
struct Outer;
struct S1E7138;

struct Part {
    int pad0;
    char *h1;
    char *h2;
};

struct Sub {
    char pad0[0x9C];
    struct Part part;
    char padA8[0x5C];
    char *hTail;
};

struct Obj {
    char pad0[0x54];
    struct Outer **f54;
    struct Sub *f58;
};

extern void func_1D4E30(struct Outer *a0, int a1);
extern void func_1E50F0(struct Obj *o);
extern void func_07FAE8(char *a0, int a1);
extern void func_083F98(char *record);
extern void func_1E7138(struct S1E7138 *p);

void func_17B468(struct Obj *o)
{
    struct Sub *s = o->f58;
    struct Part *p = &s->part;

    func_1D4E30(*o->f54, (int)o);
    func_1E50F0(o);
    if (p->h1 != 0) {
        func_07FAE8(p->h1, 1);
        p->h1 = 0;
    }
    if (p->h2 != 0) {
        func_083F98(p->h2);
        p->h2 = 0;
    }
    func_1E7138((struct S1E7138 *)((char *)s + 0xA8));
    if (s->hTail != 0) {
        func_07FAE8(s->hTail, 1);
    }
}
