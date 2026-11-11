/* LEVEL_06:0x08A280 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_001FF098[];
extern int D_00284B40[];
extern void *D_001F5A8C;
extern Cur *D_0021E128;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_08A160(const void *a, const void *b);
extern void *func_120488(int index, void *lists);
extern void func_08A188(void *rec, Pair *tbl);

void func_08A280(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_001FF098[i];
        tbl[i].idx = i;
        D_00284B40[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_08A160);
    r = func_120488(9, D_001F5A8C);
    if (r != 0)
        func_08A188(r, tbl);
    if (D_0021E128->f38 != 0) {
        r = func_120488(9, D_0021E128->f60);
        if (r != 0)
            func_08A188(r, tbl);
    }
    r = func_120488(9, D_0021E128->f48);
    if (r != 0)
        func_08A188(r, tbl);
}
