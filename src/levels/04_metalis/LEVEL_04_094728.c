/* LEVEL_04:0x094728 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00229B98[];
extern int D_002B25C0[];
extern void *D_002202AC;
extern Cur *D_0024BBA8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_094608(const void *a, const void *b);
extern void *func_1362B0(int index, void *lists);
extern void func_094630(void *rec, Pair *tbl);

void func_094728(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00229B98[i];
        tbl[i].idx = i;
        D_002B25C0[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_094608);
    r = func_1362B0(9, D_002202AC);
    if (r != 0)
        func_094630(r, tbl);
    if (D_0024BBA8->f38 != 0) {
        r = func_1362B0(9, D_0024BBA8->f60);
        if (r != 0)
            func_094630(r, tbl);
    }
    r = func_1362B0(9, D_0024BBA8->f48);
    if (r != 0)
        func_094630(r, tbl);
}
