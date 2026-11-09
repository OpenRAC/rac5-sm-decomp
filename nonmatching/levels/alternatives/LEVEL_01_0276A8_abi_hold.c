/* LEVEL_01.REL:0x0276A8: reviewed 68-byte candidate, held for ABI review.
 * Sets or clears bit 1 of a flag byte at index in a table.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001F3FAC;

int func_0276A8(unsigned int index, int enabled)
{
    unsigned char *flag;

    if (index >= 100)
        return 0;
    flag = (unsigned char *)((unsigned int)D_001F3FAC + (index + 0x1b60));
    if (enabled)
        *flag |= 2;
    else
        *flag &= ~2;
    return 1;
}
