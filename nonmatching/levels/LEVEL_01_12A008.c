/* LEVEL_01.REL:0x12A008: reviewed 92-byte candidate, held for ABI review.
 * Stores a transformed copy of a counted run of words.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning int with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_12A068(int v);

void func_12A008(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_12A068(*s++);
            c--;
        } while (c != 0);
    }
}
