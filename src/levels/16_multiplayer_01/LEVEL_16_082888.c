/* LEVEL_16:0x082888 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_001C4F48[];
extern int D_0024E240[];
extern void *D_001B499C;
extern Cur *D_001E00A8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_082768(const void *a, const void *b);
extern void *func_106CB8(int index, void *lists);
extern void func_082790(void *rec, Pair *tbl);

void func_082888(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_001C4F48[i];
        tbl[i].idx = i;
        D_0024E240[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_082768);
    r = func_106CB8(9, D_001B499C);
    if (r != 0)
        func_082790(r, tbl);
    if (D_001E00A8->f38 != 0) {
        r = func_106CB8(9, D_001E00A8->f60);
        if (r != 0)
            func_082790(r, tbl);
    }
    r = func_106CB8(9, D_001E00A8->f48);
    if (r != 0)
        func_082790(r, tbl);
}
