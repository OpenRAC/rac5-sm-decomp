/* LEVEL_04:0x1A4380 -- rebases the item record's offset on the global base (clearing bit 0 of the target's flag byte), resets the state record and its 0x14-byte block, sets the 0x40 mode bit and the 120.0 timer, and reports success. */
extern void *memset(void *p, int c, unsigned int n);

struct Item {
    unsigned int f0;
};

struct State {
    void *f0;
    int f4;
    char blk[0x14];
    int pad1C;
    int f20;
};

struct Obj {
    char pad0[0x45];
    unsigned char f45;
    char pad46[0xE];
    struct Item *f54;
    struct State *f58;
    char pad5C[8];
    unsigned int f64;
    char pad68[8];
    float f70;
};

extern unsigned char *D_002201B4;
extern char D_0023E670[];

int func_1A4380(struct Obj *o)
{
    struct Item *item = o->f54;
    unsigned char *p;
    struct State *s;

    if (item->f0 != 0) {
        p = D_002201B4 + item->f0;
        item->f0 = (unsigned int)p;
        if (p != 0)
            p[0x53] &= 0xFE;
    }
    s = o->f58;
    s->f0 = D_0023E670;
    s->f4 = 0;
    o->f64 |= 0x40;
    s->f20 = 0;
    memset(s->blk, 0, 0x14);
    o->f45 = 0;
    o->f70 = 120.0f;
    return 1;
}
