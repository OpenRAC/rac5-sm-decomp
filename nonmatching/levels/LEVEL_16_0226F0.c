/* LEVEL_16.REL:0x0226F0: reviewed 188-byte candidate, held for ABI review.
 * Scans 25 slots, returns whether a flagged byte is set.
 * pinned C with gnu-ee-trial links 188/188 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_022890 returning int with (int, int), but the accepted
 * LEVEL_16_022890.c defines it returning int with no arguments.
 * It declares func_022660 returning int with (int, pointer, int), but the
 * accepted LEVEL_16_022660.c defines it returning int with (pointer, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_022890(int a, int b);
int func_022660(int a, void *b, int c);
int func_0224D0(int a, void *b, int c, int d);
int func_0220C8(int a, int b);

int func_0226F0(void *p)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 25; i++) {
        if (func_022890(i, -1) == 0) {
            continue;
        }
        for (j = 0; j < 3; j++) {
            if (func_022660(i, p, -1) != 0) {
                continue;
            }
            if (func_0224D0(i, p, j, -1) != 0) {
                return ((unsigned char *)(func_0220C8(i, -1) + j))[0x4B] != 0;
            }
        }
    }
    return 0;
}
