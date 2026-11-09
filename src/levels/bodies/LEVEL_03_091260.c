/* LEVEL_03:0x091260 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_00229118[];
extern int D_002B2C40[];
extern void *D_0021F50C;
extern Cur *D_0024C228;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_091140(const void *a, const void *b);
extern void *func_128098(int index, void *lists);
extern void func_091168(void *rec, Pair *tbl);

void func_091260(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00229118[i];
        tbl[i].idx = i;
        D_002B2C40[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_091140);
    r = func_128098(9, D_0021F50C);
    if (r != 0)
        func_091168(r, tbl);
    if (D_0024C228->f38 != 0) {
        r = func_128098(9, D_0024C228->f60);
        if (r != 0)
            func_091168(r, tbl);
    }
    r = func_128098(9, D_0024C228->f48);
    if (r != 0)
        func_091168(r, tbl);
}
