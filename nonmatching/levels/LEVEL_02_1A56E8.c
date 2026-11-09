/* LEVEL_02.REL:0x1A56E8: reviewed 92-byte candidate, held for ABI review.
 * Returns 1 when the first helper reports zero, else 1 only when the second
 * helper reports zero.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_028ED8 returning int with (pointer), but the accepted
 * LEVEL_02_028ED8.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct E1A56E8 {
    char pad00[0x5C];
    void *p5C;
    void *p60;
};

extern int D_0022F770;
extern int func_0286A0(int a, void *b);
extern int func_028ED8(void *a);

int func_1A56E8(struct E1A56E8 *e)
{
    int r;

    r = 0;
    if (func_0286A0(D_0022F770, e->p60) == 0 || func_028ED8(e->p5C) == 0) {
        r = 1;
    }
    return r;
}
