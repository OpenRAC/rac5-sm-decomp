/* LEVEL_01.REL:0x091630: reviewed 240-byte candidate, held for ABI review.
 * Builds an index-sorted table and applies it to up to three looked-up
 * records.
 * pinned C with gnu-ee-trial links 240/240 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_129E30 returning pointer with (int, int), but the accepted
 * LEVEL_01_129E30.c defines it returning pointer with (int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { int key; int idx; } Pair;
typedef struct { char pad[0x38]; int f38; char pad3C[0xC]; int f48; char pad4C[0x14]; int f60; } Cur;
extern int D_00210218[];
extern int D_00297DC0[];
extern int D_00206E8C;
extern Cur *D_002313A8;
extern void qsort(void *base, int n, int size, int (*cmp)(const void *, const void *));
extern int func_091510(const void *a, const void *b);
extern void *func_129E30(int kind, int id);
extern void func_091538(void *rec, Pair *tbl);

void func_091630(void)
{
    Pair tbl[0xCB];
    void *r;
    unsigned i;

    for (i = 0; i < 0xCB; i++) {
        tbl[i].key = D_00210218[i];
        tbl[i].idx = i;
        D_00297DC0[i] = 0x7FC;
    }
    qsort(tbl, 0xCB, 8, func_091510);
    r = func_129E30(9, D_00206E8C);
    if (r != 0)
        func_091538(r, tbl);
    if (D_002313A8->f38 != 0) {
        r = func_129E30(9, D_002313A8->f60);
        if (r != 0)
            func_091538(r, tbl);
    }
    r = func_129E30(9, D_002313A8->f48);
    if (r != 0)
        func_091538(r, tbl);
}
