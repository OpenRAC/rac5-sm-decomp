/* LEVEL_01:0x091630 -- builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00210218[];
extern int D_00297DC0[];
extern void *D_00206E8C;
extern Cur *D_002313A8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_091510(const void *a, const void *b);
extern void *func_129E30(int index, void *lists);
extern void func_091538(void *rec, Pair *tbl);

void func_091630(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00210218[i];
        tbl[i].idx = i;
        D_00297DC0[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_091510);
    r = func_129E30(9, D_00206E8C);
    if (r != 0)
        func_091538(r, tbl);
    if (D_002313A8->f38 != 0) {
        r = func_129E30(9, D_002313A8->f60);
        if (r != 0)
            func_091538(r, tbl);
    }
    r = func_129E30(9, D_002313A8->f48);
    if (r != 0)
        func_091538(r, tbl);
}
