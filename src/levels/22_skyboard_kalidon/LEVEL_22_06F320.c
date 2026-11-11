/* LEVEL_22:0x06F320 -- placement copy of LEVEL_01_07C820.c: looks up a packed 4-bit value for an offset inside a region. */
struct Ctx { char p0[0x40 - 0]; struct Sub *f40; char p1[0x5C - 0x44]; int f5C; };
struct Sub { char p0[0x3F]; unsigned char f3F; };
struct Pg { char p0[0x44]; int f44; };
extern struct Pg *D_00165D70;
extern char *D_0015332C;
extern int D_00177C70;

int func_06F320(struct Ctx *a0, int *a1)
{
    int off;
    int n;
    unsigned int idx;
    unsigned char b;
    int r;
    char *tbl;

    if (a0->f40->f3F == 1 && a0->f5C != 0) {
        off = (int)a0 - D_00165D70->f44;
        n = off >> 7;
        if ((unsigned int)n < 0x400) {
            idx = ((unsigned int)n >> 1) + (D_00177C70 << 9);
            tbl = D_0015332C + 0x10520;
            b = *(unsigned char *)(tbl + idx);
            if (n & 1) {
                r = b >> 4;
            } else {
                r = b & 0xF;
            }
            if (a1 != 0) {
                *a1 = n;
            }
            return r;
        }
    }
    return 0;
}
