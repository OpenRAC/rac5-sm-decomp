/* LEVEL_01.REL:0x119FF0: reviewed 212-byte candidate, held for ABI review.
 * Reads into a slot and reports how many whole units were read.
 * pinned C with gnu-ee-trial links 212/212 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0296E8 returning int with (int, int, int), but the accepted
 * FRONTEND_002640.c defines it returning int with (int, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00351810[];
extern char D_003517F0[];
extern int func_0296E8(int slot, int dst, int size);

int func_119FF0(int dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_00351810[slot] = 0;
    D_003517F0[slot] = 0;
    r = func_0296E8(slot, dst, size);
    if (r < 0) {
        D_00351810[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_003517F0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
