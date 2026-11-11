/* LEVEL_07:0x0934B8 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00224F18[];
extern int D_002AD6C0[];
extern void *D_0021B18C;
extern Cur *D_00246CA8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_093398(const void *a, const void *b);
extern void *func_12CE30(int index, void *lists);
extern void func_0933C0(void *rec, Pair *tbl);

void func_0934B8(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00224F18[i];
        tbl[i].idx = i;
        D_002AD6C0[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_093398);
    r = func_12CE30(9, D_0021B18C);
    if (r != 0)
        func_0933C0(r, tbl);
    if (D_00246CA8->f38 != 0) {
        r = func_12CE30(9, D_00246CA8->f60);
        if (r != 0)
            func_0933C0(r, tbl);
    }
    r = func_12CE30(9, D_00246CA8->f48);
    if (r != 0)
        func_0933C0(r, tbl);
}
