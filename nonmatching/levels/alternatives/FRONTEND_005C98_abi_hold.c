/* FRONTEND.REL:0x005C98: reviewed 108-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_0A07E0.c.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning int with (pointer, int, int), but the
 * accepted caller FRONTEND_008B58.c declares it returning pointer with
 * (pointer, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_005C98(char *object, int column, int row)
{
    char *table;
    int width;
    int height;

    if (object == 0)
        return 0;
    table = *(char **)(object + 0xc);
    if (table == 0)
        return 0;
    width = *(unsigned short *)(table + 0x2a);
    height = *(unsigned short *)(table + 0x2e);
    if (column < 0 || column >= width)
        return 0;
    row %= height;
    if (row < 0)
        row += height;
    return *(int *)(table + *(int *)(table + 0x18) +
                    4 * (width * row + column));
}
