/* LEVEL_23:0x087050 -- placement copy of LEVEL_01_091630.c: builds an index-sorted table and applies it to up to three looked-up records. */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; void *f48; char pad4C[0x14]; void *f60; } Cur;
extern int D_001E3398[];
extern int D_00269200[];
extern void *D_001DA28C;
extern Cur *D_001FE828;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_086F30(const void *a, const void *b);
extern void *func_11ACA8(int index, void *lists);
extern void func_086F58(void *rec, Pair *tbl);

void func_087050(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_001E3398[i];
        tbl[i].idx = i;
        D_00269200[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_086F30);
    r = func_11ACA8(9, D_001DA28C);
    if (r != 0)
        func_086F58(r, tbl);
    if (D_001FE828->f38 != 0) {
        r = func_11ACA8(9, D_001FE828->f60);
        if (r != 0)
            func_086F58(r, tbl);
    }
    r = func_11ACA8(9, D_001FE828->f48);
    if (r != 0)
        func_086F58(r, tbl);
}
