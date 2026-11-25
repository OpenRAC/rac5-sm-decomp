/* LEVEL_23:0x05CD68 -- placement copy of LEVEL_05_061218.c: placement copy of LEVEL_01_0635B0.c: resets a helper state, copies one record field into a nested record, and calls a helper with a link. */
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

extern int D_001ED970;
extern char *D_00206604;
extern int func_09D7E0(unsigned int slot, unsigned int mode);
extern void func_167D60(char *);
extern void func_173A60(void);

void func_05CD68(struct P0635B0 *p)
{
    struct R0635B0 *r;
    struct N0635B0 *n;
    int t;

    func_09D7E0(D_001ED970, 0);
    if (D_00206604 != 0) {
        func_167D60(D_00206604);
    }
    r = (struct R0635B0 *)((char *)p + 0xFD0);
    t = p->f59C;
    r->bE = 2;
    r->f10 = t;
    n = p->f5B4;
    if (n->f54->f00 != 0) {
        ((void (*)(void *))func_173A60)(n->f54->f00);
    }
}
