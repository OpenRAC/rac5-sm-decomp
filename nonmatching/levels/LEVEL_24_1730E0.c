/* LEVEL_24.REL:0x1730E0: reviewed 120-byte candidate, held for ABI review.
 * Scans the words of a counted list for a value, returning one when found.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_170DE8 returning int with (int), but the accepted
 * LEVEL_01_1B5420.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Sub22 {
    char pad0[4];
    unsigned int w4;
    int list[1];
};

struct Obj22 {
    char pad0[0x58];
    struct Sub22 *p58;
};

int func_170DE8(int v);

int func_1730E0(struct Obj22 *a0, int a1)
{
    unsigned int i;
    struct Sub22 *s2;

    s2 = a0->p58;
    for (i = 0; i < s2->w4; i++) {
        if (func_170DE8(s2->list[i]) == a1) {
            return 1;
        }
    }
    return 0;
}
