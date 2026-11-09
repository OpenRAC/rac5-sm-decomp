/* LEVEL_02:0x097D00 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00225198[];
extern int D_002AF2C0[];
extern void *D_0021BE4C;
extern Cur *D_002488A8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_097BE0(const void *a, const void *b);
extern void *func_1301E0(int index, void *lists);
extern void func_097C08(void *rec, Pair *tbl);

void func_097D00(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00225198[i];
        tbl[i].idx = i;
        D_002AF2C0[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_097BE0);
    r = func_1301E0(9, D_0021BE4C);
    if (r != 0)
        func_097C08(r, tbl);
    if (D_002488A8->f38 != 0) {
        r = func_1301E0(9, D_002488A8->f60);
        if (r != 0)
            func_097C08(r, tbl);
    }
    r = func_1301E0(9, D_002488A8->f48);
    if (r != 0)
        func_097C08(r, tbl);
}
