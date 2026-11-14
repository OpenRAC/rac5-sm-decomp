/* LEVEL_06:0x188270 -- sets two flag bits on the object, switches it to state 1, clears a field of its linked record and runs the record's sub-record helper. */
struct B {
    char pad00[0xC];
    int fC;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x11];
    struct B *f58;
    char pad5C[8];
    unsigned int flags;
};

extern void func_074838(void *p);

int func_188270(struct Obj *o)
{
    struct B *b;

    o->flags |= 0x470;
    b = o->f58;
    b->fC = 0;
    o->b46 = 1;
    func_074838((char *)b + 0x10);
    return 1;
}
