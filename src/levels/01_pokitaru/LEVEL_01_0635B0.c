/* LEVEL_01:0x0635B0 -- placement copy of LEVEL_05_061218.c: placement copy of LEVEL_01_0635B0.c: resets a helper state, copies one record field into a nested record, and calls a helper with a link. */
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

extern int D_0021A7F0;
extern char *D_00239184;
extern int func_0A6A70(unsigned int slot, unsigned int mode);
extern void func_17BD28(char *);
extern void func_18D2E0(void);

void func_0635B0(struct P0635B0 *p)
{
    struct R0635B0 *r;
    struct N0635B0 *n;
    int t;

    func_0A6A70(D_0021A7F0, 0);
    if (D_00239184 != 0) {
        func_17BD28(D_00239184);
    }
    r = (struct R0635B0 *)((char *)p + 0xFD0);
    t = p->f59C;
    r->bE = 2;
    r->f10 = t;
    n = p->f5B4;
    if (n->f54->f00 != 0) {
        ((void (*)(void *))func_18D2E0)(n->f54->f00);
    }
}
