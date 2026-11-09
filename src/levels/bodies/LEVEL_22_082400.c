/* LEVEL_22:0x082400 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_0016D698[];
extern int D_001ED980[];
extern void *D_00165E6C;
extern Cur *D_00182FA8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_0822E0(const void *a, const void *b);
extern void *func_100A78(int index, void *lists);
extern void func_082308(void *rec, Pair *tbl);

void func_082400(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_0016D698[i];
        tbl[i].idx = i;
        D_001ED980[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_0822E0);
    r = func_100A78(9, D_00165E6C);
    if (r != 0)
        func_082308(r, tbl);
    if (D_00182FA8->f38 != 0) {
        r = func_100A78(9, D_00182FA8->f60);
        if (r != 0)
            func_082308(r, tbl);
    }
    r = func_100A78(9, D_00182FA8->f48);
    if (r != 0)
        func_082308(r, tbl);
}
