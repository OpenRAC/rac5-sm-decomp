/* LEVEL_21:0x0754F0 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00164998[];
extern int D_001AFE00[];
extern void *D_0015B80C;
extern Cur *D_00179528;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_0753D0(const void *a, const void *b);
extern void *func_0EDCB0(int index, void *lists);
extern void func_0753F8(void *rec, Pair *tbl);

void func_0754F0(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00164998[i];
        tbl[i].idx = i;
        D_001AFE00[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_0753D0);
    r = func_0EDCB0(9, D_0015B80C);
    if (r != 0)
        func_0753F8(r, tbl);
    if (D_00179528->f38 != 0) {
        r = func_0EDCB0(9, D_00179528->f60);
        if (r != 0)
            func_0753F8(r, tbl);
    }
    r = func_0EDCB0(9, D_00179528->f48);
    if (r != 0)
        func_0753F8(r, tbl);
}
