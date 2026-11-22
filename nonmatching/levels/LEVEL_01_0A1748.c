/* USA LEVEL_01.REL:0x0A1748, 308-byte candidate (21 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x68.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

struct Pk16 {
    char b[16];
};

struct Block {
    u128 q0;
    u128 q1;
    u128 q2;
    u128 q3;
};

struct Ctx {
    int pad_00;
    unsigned int *p_04;
    struct Pk16 *p_08;
};

extern int D_001F6848[];
extern char db_dlist[];
extern struct Pk16 g_cntTag[];

void func_0A1748(int slot, struct Block *src)
{
    struct Ctx *c;
    struct Ctx *d;
    unsigned int *w;
    u128 zero;
    int id;
    char *dl;

    dl = db_dlist;
    id = D_001F6848[slot];
    if (id >= 0) {
        c = *(struct Ctx **)(dl + 0x54);
        *c->p_08 = g_cntTag[0];
        zero = 0;
        w = c->p_04;
        w[3] = 0x13000000;
        w[0] = 0;
        w[1] = 0;
        w[2] = 0;
        c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
        *(unsigned short *)c->p_08 = 1;
        c->p_08 = (struct Pk16 *)c->p_04;
        c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
        d = *(struct Ctx **)(dl + 0x54);
        *d->p_08 = g_cntTag[0];
        *(u128 *)d->p_04 = zero;
        ((unsigned int *)d->p_04)[3] = id | 0x6C040000;
        ((struct Block *)((char *)d->p_04 + 0x10))->q0 = src->q0;
        ((struct Block *)((char *)d->p_04 + 0x10))->q1 = src->q1;
        ((struct Block *)((char *)d->p_04 + 0x10))->q2 = src->q2;
        ((struct Block *)((char *)d->p_04 + 0x10))->q3 = src->q3;
        *(unsigned short *)d->p_08 = 5;
        d->p_08 = (struct Pk16 *)((char *)d->p_04 + 0x50);
        d->p_04 = (unsigned int *)((char *)d->p_04 + 0x60);
    }
}
