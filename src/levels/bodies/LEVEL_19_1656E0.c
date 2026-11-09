/* LEVEL_19:0x1656E0 -- placement copy of LEVEL_17_15D160.c: passes the owner's referenced record to a helper unless a status check rejects it. */

struct X15D160 {
    char pad00[0xF4];
    int fF4;
};

struct H15D160 {
    struct X15D160 *p00;
};

struct E15D160 {
    char pad00[0x58];
    struct H15D160 *p58;
};

extern int func_037638(struct X15D160 *p);
extern void func_164BF8(struct E15D160 *e, struct X15D160 *p);

int func_1656E0(struct E15D160 *e)
{
    struct H15D160 *h;

    h = e->p58;
    if (h->p00->fF4 == 0 || func_037638(h->p00) != 0) {
        func_164BF8(e, h->p00);
        return 1;
    }
    return 0;
}
