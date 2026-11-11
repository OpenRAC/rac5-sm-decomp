/* LEVEL_08:0x099550 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00259E98[];
extern int D_002E7040[];
extern void *D_0024FD4C;
extern Cur *D_00280628;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_099430(const void *a, const void *b);
extern void *func_13B368(int index, void *lists);
extern void func_099458(void *rec, Pair *tbl);

void func_099550(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00259E98[i];
        tbl[i].idx = i;
        D_002E7040[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_099430);
    r = func_13B368(9, D_0024FD4C);
    if (r != 0)
        func_099458(r, tbl);
    if (D_00280628->f38 != 0) {
        r = func_13B368(9, D_00280628->f60);
        if (r != 0)
            func_099458(r, tbl);
    }
    r = func_13B368(9, D_00280628->f48);
    if (r != 0)
        func_099458(r, tbl);
}
