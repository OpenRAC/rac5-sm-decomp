/* LEVEL_03:0x1D03C8 -- picks a new state from a query result and applies it. */
struct A {
    char pad[0x10];
    void *v10;
    char f14[8];
};
struct B {
    char pad[0x68];
    unsigned char b68;
};
struct Obj {
    char pad[0x45];
    unsigned char state;
    char pad46[0xE];
    struct A *a;
    struct B *b;
};
extern int func_1D0A80(struct Obj *o);
extern void func_1CFE00(struct Obj *o, int s);
extern int func_030E38(char *p, struct Obj *o, void * v, int b, int z, float x, float y);

int func_1D03C8(struct Obj *o)
{
    struct A *a = o->a;
    struct B *b = o->b;
    unsigned char st = o->state;
    int r;
    if (func_1D0A80(o)) {
        func_1CFE00(o, 0x19);
        return 0x19;
    }
    r = func_030E38(a->f14, o, a->v10, b->b68, 0, 0.1f, 2.0f);
    if (r == 2) {
        st = 0xF;
        func_1CFE00(o, 0xF);
    } else if (r == 1) {
        st = 0x10;
        func_1CFE00(o, 0x10);
    } else if (r == 0) {
        st = 0xD;
        func_1CFE00(o, 0xD);
    }
    return st;
}
