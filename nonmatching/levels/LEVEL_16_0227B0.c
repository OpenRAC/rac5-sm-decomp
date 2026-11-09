/* LEVEL_16.REL:0x0227B0: reviewed 180-byte candidate, held for ABI review.
 * Tries up to three slots; on success stores a byte at the slot offset 0x4B.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_022660 returning int with (pointer, pointer, int), but the
 * accepted LEVEL_16_022660.c defines it returning int with (pointer, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_0224D0(void *a0, void *a1, int a2, int a3);
int func_022660(void *a0, void *a1, int a2);
int func_0220C8(void *a0, int a1);

int func_0227B0(void *obj, void *p1, int val, int p3)
{
    unsigned int i;
    int base;

    for (i = 0; i < 3; i++) {
        if (func_0224D0(obj, p1, i, p3) != 0) {
            if (func_022660(obj, p1, p3) != 0) {
                return 0;
            }
            base = func_0220C8(obj, p3);
            *(char *)(base + i + 0x4B) = (char)val;
            return 1;
        }
    }
    return 0;
}
