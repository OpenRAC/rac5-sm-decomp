/* FRONTEND.REL:0x0059E0: reviewed 108-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_0A0528.c.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning pointer with (pointer, int, int), but the
 * accepted caller FRONTEND_005988.c declares it returning void with (pointer,
 * int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
/* LEVEL_01.REL:0x0A0528: walk variable-size entries and return the selected match. */
unsigned short *func_0059E0(char *data, unsigned int type, int ordinal)
{
    char *cursor;
    char *end;
    if (data == 0)
        return 0;
    end = data + *(int *)(data + 4);
    cursor = data + *(int *)(data + 8);
    while (cursor < end) {
        if (type == 0 || *(unsigned short *)cursor == type) {
            ordinal--;
            if (ordinal == -1)
                return (unsigned short *)cursor;
        }
        cursor += *(int *)(cursor + 4);
    }
    return 0;
}
