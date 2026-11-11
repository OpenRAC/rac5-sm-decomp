/* LEVEL_17:0x154178 -- placement copy of LEVEL_01_18D0F8.c: checks whether a value read from a callback falls in a range. */
struct S235140 {
    char pad[0x30];
    int f30;
};
struct Inner {
    int f0;
    char pad4[8];
    unsigned char f0C;
};
struct Range {
    int pad0;
    void *f4;
    int f8;
    int fC;
};
struct Obj {
    char pad[0x45];
    unsigned char f45;
    char pad2[0xE];
    struct Range *f54;
    struct Inner *f58;
};
extern struct S235140 D_001D5390;
extern int func_076C28(void *a, void *b);
extern int func_016EF0(int a, int b, int c, unsigned char *d);

int func_154178(struct Obj *self)
{
    struct Inner *in;
    struct Range *r;
    unsigned char v;
    int ok;

    in = self->f58;
    r = self->f54;
    if (in->f0C != 0) {
        return 0;
    }
    if (in->f0 != 0) {
        return 1;
    }
    if (r->f4 != 0) {
        struct S235140 *s = &D_001D5390;
        return func_076C28(r->f4, &s->f30);
    }
    if (r->f8 >= 0 && r->fC >= 0) {
        ok = 0;
        v = 0;
        if (func_016EF0(0, 0, 0, &v) != 0) {
            ok = !(v < r->f8 || r->fC < v);
        }
        return ok;
    }
    return self->f45 == 0;
}
