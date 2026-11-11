/* LEVEL_18:0x0821D0 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_001C64C8[];
extern int D_0024E5C0[];
extern void *D_001B5E1C;
extern Cur *D_001E0428;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_0820B0(const void *a, const void *b);
extern void *func_105968(int index, void *lists);
extern void func_0820D8(void *rec, Pair *tbl);

void func_0821D0(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_001C64C8[i];
        tbl[i].idx = i;
        D_0024E5C0[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_0820B0);
    r = func_105968(9, D_001B5E1C);
    if (r != 0)
        func_0820D8(r, tbl);
    if (D_001E0428->f38 != 0) {
        r = func_105968(9, D_001E0428->f60);
        if (r != 0)
            func_0820D8(r, tbl);
    }
    r = func_105968(9, D_001E0428->f48);
    if (r != 0)
        func_0820D8(r, tbl);
}
