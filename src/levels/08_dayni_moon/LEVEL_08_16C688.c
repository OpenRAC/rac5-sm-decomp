/* LEVEL_08:0x16C688 -- placement copy of LEVEL_04_1658F8.c: tears the object down: releases its linked record, then the two handles held in its sub-record, then the embedded part, then finishes the object. */
struct Outer;
struct S1E7138;

struct Part {
    int pad0;
    char *h1;
    char *h2;
};

struct Sub {
    char pad0[0xE8];
    struct Part part;
    char pad0F4[0x11C - 0xF4];
};

struct Obj {
    char pad0[0x54];
    struct Outer **f54;
    struct Sub *f58;
};

extern void func_1F9DB0(struct Outer *a0, int a1);
extern void func_0845F8(char *a0, int a1);
extern void func_088AA8(char *record);
extern void func_20ED08(struct S1E7138 *p);
extern void func_208AA8(struct Sub *s);

void func_16C688(struct Obj *o)
{
    struct Sub *s = o->f58;
    struct Part *p = &s->part;

    func_1F9DB0(*o->f54, (int)o);
    if (p->h1 != 0) {
        func_0845F8(p->h1, 1);
        p->h1 = 0;
    }
    if (p->h2 != 0) {
        func_088AA8(p->h2);
        p->h2 = 0;
    }
    func_20ED08((struct S1E7138 *)((char *)s + 0x11C));
    func_208AA8(s);
}
