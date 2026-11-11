/* LEVEL_05:0x1AA550 -- resets the object, rebases its three stored handle offsets on the global base (each must resolve to a live record) and records which of two input modes is available. */

struct Handles {
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

struct Obj {
    unsigned char pad0[0x54];
    struct Handles *f54;
    unsigned char pad58[0xC];
    unsigned int f64;
    unsigned char pad68[0xE];
    unsigned char b76;
    unsigned char b77;
};

struct Cfg {
    unsigned char pad0[0xC];
    unsigned char b0C;
    unsigned char b0D;
};

extern unsigned char *D_001F5E14;
extern struct Cfg D_0021CC30;

extern void func_0275C8(void);
extern int func_0261F0(int a0, int a1);

static __inline__ int Rebase(unsigned int *slot)
{
    unsigned char *p;

    if (*slot == 0) {
        return 0;
    }
    p = D_001F5E14 + *slot;
    if (*(unsigned int *)(p + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (unsigned int)p;
    return 1;
}

int func_1AA550(struct Obj *o)
{
    struct Handles *h;

    o->b76 = 0;
    o->f64 |= 0x20;
    o->b77 = 0;
    h = o->f54;
    func_0275C8();
    if (!Rebase(&h->a)) {
        return 0;
    }
    if (!Rebase(&h->b)) {
        return 0;
    }
    if (!Rebase(&h->c)) {
        return 0;
    }
    if (func_0261F0(0x79, 0)) {
        D_0021CC30.b0C = 0x40;
    } else {
        D_0021CC30.b0C = 1;
    }
    if (func_0261F0(0x79, 1)) {
        D_0021CC30.b0D = 0x40;
    } else {
        D_0021CC30.b0D = 1;
    }
    return 1;
}
