/* LEVEL_08:0x1687F0 -- placement copy of LEVEL_02_1608F8.c: object init: sets the 0x40000 mode bit, installs the handler in the linked record, clears the 0x6C-byte state record, links it back to the object, and switches the object to mode 2 with the 0x1000 bit. */
struct Obj;

struct Link {
    char pad0[0xDC];
    void (*fDC)(int);
};

struct State {
    int f0;
    char pad4[0xA];
    unsigned char b0E;
    char pad0F;
    struct Obj *f10;
    int f14;
};

struct Obj {
    char pad0[0x48];
    struct Link *f48;
    char pad4C[0xC];
    struct State *f58;
    char pad5C[8];
    unsigned int f64;
    char pad68[0x10];
    unsigned int f78_lo : 16;
    unsigned int mode : 4;
    unsigned int f78_hi : 12;
};

extern void *memset(void *p, int c, unsigned int n);
extern void func_169B10(int a0);
extern void func_168D58(char *obj, unsigned char kind, int flag);

int func_1687F0(struct Obj *o)
{
    struct State *s;

    o->f64 |= 0x40000;
    o->f48->fDC = func_169B10;
    s = o->f58;
    memset(s, 0, 0x6C);
    func_168D58((char *)o, 1, 0);
    s->f10 = o;
    s->b0E = 2;
    s->f14 = 0;
    s->f0 = 0;
    o->f64 |= 0x1000;
    o->mode = 2;
    return 1;
}
