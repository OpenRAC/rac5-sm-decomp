/* LEVEL_01.REL:0x17D1C8: reviewed 112-byte candidate, held for ABI review.
 * Fills six words of a table by passing each entry of a record table through a
 * helper.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning int with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00396AC0[];
extern char D_00222A20[];

int func_12A068(int a0);

void func_17D1C8(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_00396AC0;
    dst = (int *)(base + 0xA4);
    src = D_00222A20;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_12A068(v);
        dst++;
    } while (i != 6);
}
