/* LEVEL_01.REL:0x16B640: reviewed 56-byte candidate, held for ABI review.
 * Returns the table record for a byte key when its first word matches and its
 * flag is set.
 * pinned C with gnu-ee-trial links 56/56 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It defines the function returning pointer with (int), but the accepted
 * caller LEVEL_01_16B5B0.c declares it returning pointer with (pointer).
 * It defines the function returning pointer with (int), but the accepted
 * caller LEVEL_01_16B390.c declares it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int D_003959F8[];

unsigned int *func_16B640(unsigned int value)
{
    unsigned int index;
    unsigned int *entry;

    index = value & 0xff;
    entry = (unsigned int *)((char *)D_003959F8 + index * 0x6c);
    if (*entry == value && entry[26] != 0) {
        return entry;
    }
    return 0;
}
