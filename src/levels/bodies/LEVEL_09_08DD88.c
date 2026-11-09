/* LEVEL_09:0x08DD88 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_001F9E18[];
extern int D_0027F540[];
extern void *D_001F098C;
extern Cur *D_00218B28;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_08DC68(const void *a, const void *b);
extern void *func_122DC8(int index, void *lists);
extern void func_08DC90(void *rec, Pair *tbl);

void func_08DD88(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_001F9E18[i];
        tbl[i].idx = i;
        D_0027F540[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_08DC68);
    r = func_122DC8(9, D_001F098C);
    if (r != 0)
        func_08DC90(r, tbl);
    if (D_00218B28->f38 != 0) {
        r = func_122DC8(9, D_00218B28->f60);
        if (r != 0)
            func_08DC90(r, tbl);
    }
    r = func_122DC8(9, D_00218B28->f48);
    if (r != 0)
        func_08DC90(r, tbl);
}
