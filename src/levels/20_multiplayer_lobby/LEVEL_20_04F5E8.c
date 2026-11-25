/* LEVEL_20:0x04F5E8 -- placement copy of LEVEL_05_061218.c: placement copy of LEVEL_01_0635B0.c: resets a helper state, copies one record field into a nested record, and calls a helper with a link. */
struct L0635B0 {
    void *f00;
};

struct N0635B0 {
    char pad0[0x54];
    struct L0635B0 *f54;
};

struct R0635B0 {
    char pad0[0x0E];
    unsigned char bE;
    char padF[1];
    int f10;
};

struct P0635B0 {
    char pad0[0x59C];
    int f59C;
    char pad5A0[0x5B4 - 0x5A0];
    struct N0635B0 *f5B4;
};

extern int D_00131510;
extern char *D_00143184;
extern int func_0800B0(unsigned int slot, unsigned int mode);
extern void func_0F7A40(void);
extern void func_0F7AB0(void);

void func_04F5E8(struct P0635B0 *p)
{
    struct R0635B0 *r;
    struct N0635B0 *n;
    int t;

    func_0800B0(D_00131510, 0);
    if (D_00143184 != 0) {
        ((void (*)(char *))func_0F7A40)(D_00143184);
    }
    r = (struct R0635B0 *)((char *)p + 0xFD0);
    t = p->f59C;
    r->bE = 2;
    r->f10 = t;
    n = p->f5B4;
    if (n->f54->f00 != 0) {
        ((void (*)(void *))func_0F7AB0)(n->f54->f00);
    }
}
