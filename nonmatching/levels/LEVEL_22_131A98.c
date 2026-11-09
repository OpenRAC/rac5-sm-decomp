/* LEVEL_22.REL:0x131A98: reviewed 104-byte candidate, held for ABI review.
 * Classifies a byte from a record (or the global fallback) into a 0/1 result.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning int with (pointer), but the accepted
 * caller LEVEL_22_115610.c declares it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj6 {
    char pad0[0x45];
    unsigned char b45;
};

extern struct Obj6 *D_001668A4;

int func_131A98(struct Obj6 *a0)
{
    int c;
    int r;
    struct Obj6 *g;

    if (a0 != 0) {
        c = a0->b45;
    } else {
        g = D_001668A4;
        if (g == 0) {
            return 1;
        }
        c = g->b45;
    }
    r = 0;
    if (c == 0 || c == 3 || c == 5 || c == 9 || c == 8 || c == 1 || c == 0) {
        r = 1;
    }
    return r;
}
