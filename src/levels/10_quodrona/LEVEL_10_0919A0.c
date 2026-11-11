/* LEVEL_10:0x0919A0 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00219198[];
extern int D_002A11C0[];
extern void *D_0020FAEC;
extern Cur *D_0023A7A8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_091880(const void *a, const void *b);
extern void *func_127C90(int index, void *lists);
extern void func_0918A8(void *rec, Pair *tbl);

void func_0919A0(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00219198[i];
        tbl[i].idx = i;
        D_002A11C0[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_091880);
    r = func_127C90(9, D_0020FAEC);
    if (r != 0)
        func_0918A8(r, tbl);
    if (D_0023A7A8->f38 != 0) {
        r = func_127C90(9, D_0023A7A8->f60);
        if (r != 0)
            func_0918A8(r, tbl);
    }
    r = func_127C90(9, D_0023A7A8->f48);
    if (r != 0)
        func_0918A8(r, tbl);
}
