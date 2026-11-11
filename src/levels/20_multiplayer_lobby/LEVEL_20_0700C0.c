/* LEVEL_20:0x0700C0 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00125FC8[];
extern int D_00171A80[];
extern void *D_0011707C;
extern Cur *D_00137A28;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_06FFA0(const void *a, const void *b);
extern void *func_0DEA00(int index, void *lists);
extern void func_06FFC8(void *rec, Pair *tbl);

void func_0700C0(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00125FC8[i];
        tbl[i].idx = i;
        D_00171A80[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_06FFA0);
    r = func_0DEA00(9, D_0011707C);
    if (r != 0)
        func_06FFC8(r, tbl);
    if (D_00137A28->f38 != 0) {
        r = func_0DEA00(9, D_00137A28->f60);
        if (r != 0)
            func_06FFC8(r, tbl);
    }
    r = func_0DEA00(9, D_00137A28->f48);
    if (r != 0)
        func_06FFC8(r, tbl);
}
