/* LEVEL_24:0x08A430 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_001E0F98[];
extern int D_00263C80[];
extern void *D_001D7B0C;
extern Cur *D_001FD2A8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_08A310(const void *a, const void *b);
extern void *func_11F930(int index, void *lists);
extern void func_08A338(void *rec, Pair *tbl);

void func_08A430(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_001E0F98[i];
        tbl[i].idx = i;
        D_00263C80[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_08A310);
    r = func_11F930(9, D_001D7B0C);
    if (r != 0)
        func_08A338(r, tbl);
    if (D_001FD2A8->f38 != 0) {
        r = func_11F930(9, D_001FD2A8->f60);
        if (r != 0)
            func_08A338(r, tbl);
    }
    r = func_11F930(9, D_001FD2A8->f48);
    if (r != 0)
        func_08A338(r, tbl);
}
