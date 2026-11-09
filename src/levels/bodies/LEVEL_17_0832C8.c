/* LEVEL_17:0x0832C8 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_001B83C8[];
extern int D_0023F540[];
extern void *D_001A7F9C;
extern Cur *D_001D13A8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_0831A8(const void *a, const void *b);
extern void *func_106230(int index, void *lists);
extern void func_0831D0(void *rec, Pair *tbl);

void func_0832C8(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_001B83C8[i];
        tbl[i].idx = i;
        D_0023F540[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_0831A8);
    r = func_106230(9, D_001A7F9C);
    if (r != 0)
        func_0831D0(r, tbl);
    if (D_001D13A8->f38 != 0) {
        r = func_106230(9, D_001D13A8->f60);
        if (r != 0)
            func_0831D0(r, tbl);
    }
    r = func_106230(9, D_001D13A8->f48);
    if (r != 0)
        func_0831D0(r, tbl);
}
