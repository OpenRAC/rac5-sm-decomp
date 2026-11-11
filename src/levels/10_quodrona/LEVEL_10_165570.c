/* LEVEL_10:0x165570 -- object init: clears the 0x118-byte state record, then either marks the object with the 0xC30 bits when its config has a link, or fetches the shared handle (failing with 0 when missing) and installs the handler; sets the 90.0 timer and the mode bits and reports success. */
struct Cfg {
    char pad0[0x34];
    int f34;
};

struct Link {
    char pad0[0xDC];
    void (*fDC)(void);
};

struct State {
    char pad0[0x100];
    int f100;
    char pad104[4];
    float f108;
};

struct Obj {
    char pad0[0x48];
    struct Link *f48;
    char pad4C[8];
    struct Cfg *f54;
    struct State *f58;
    char pad5C[8];
    unsigned int f64;
    char pad68[0x10];
    unsigned int f78;
};

extern void *memset(void *p, int c, unsigned int n);
extern int func_169160(void);
extern void func_167C70(void);

int func_165570(struct Obj *o)
{
    struct State *s = o->f58;
    struct Cfg *c = o->f54;

    memset(s, 0, 0x118);
    if (c->f34 != 0) {
        o->f64 |= 0xC30;
    } else {
        s->f100 = func_169160();
        if (s->f100 == 0)
            return 0;
        o->f48->fDC = func_167C70;
    }
    s->f108 = 90.0f;
    o->f78 = (o->f78 & 0xFFF0FFFFu) | 0x20000u;
    return 1;
}
