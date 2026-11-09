/* LEVEL_01.REL:0x024A38: reviewed 44-byte candidate, held for ABI review.
 * Returns a table entry when the index is nonzero and below 43.
 * pinned C with gnu-ee-trial links 44/44 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *D_001F3528[];

void *func_024A38(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001F3528[index];
    return 0;
}
