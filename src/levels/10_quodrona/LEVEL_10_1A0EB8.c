/* LEVEL_10:0x1A0EB8 -- installs a handler in the linked object, clears a byte of the other linked record and reports success. */
struct Rec {
    char pad0[0x80];
    unsigned char f80;
};

struct Link {
    char padDC[0xDC];
    void (*fDC)(void);
};

struct Obj {
    char pad0[0x48];
    struct Link *f48;
    char pad4C[0xC];
    struct Rec *f58;
};

extern void func_1A0FA8(void);

int func_1A0EB8(struct Obj *o)
{
    struct Link *l = o->f48;
    struct Rec *r = o->f58;

    l->fDC = func_1A0FA8;
    r->f80 = 0;
    return 1;
}
