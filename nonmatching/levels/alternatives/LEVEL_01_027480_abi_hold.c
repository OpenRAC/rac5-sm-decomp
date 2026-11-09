/* LEVEL_01.REL:0x027480: reviewed 44-byte candidate, held for ABI review.
 * Sets bits of one byte in a table at offset 0x8C0 from a global base.
 * pinned C with gnu-ee-trial links 44/44 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char *D_001F3FAC;

void func_027480(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_001F3FAC;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
