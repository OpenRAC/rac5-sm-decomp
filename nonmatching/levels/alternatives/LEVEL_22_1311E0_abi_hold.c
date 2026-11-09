/* LEVEL_22.REL:0x1311E0: reviewed 52-byte candidate, held for ABI review.
 * Reads a word from a record table using a masked byte index.
 * pinned C with gnu-ee-trial links 52/52 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It defines the function returning int with (pointer, int), but the accepted
 * caller LEVEL_22_136738.c declares it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001668A4;

int func_1311E0(char *record, unsigned char index)
{
    char *nested;
    index &= 0xff;
    if (record == 0)
        record = D_001668A4;
    if (record == 0)
        return 0;
    nested = *(char **)(record + 0x58);
    return *(int *)(nested + (index << 2) + 0x40);
}
