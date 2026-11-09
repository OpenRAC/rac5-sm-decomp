/* LEVEL_01.REL:0x000A08: reviewed 96-byte candidate.
 * Calls a helper for six table entries and stores each result in a second
 * table.
 * pinned C with gnu-ee-trial links 96/96 bytes; first differs at +4 (2 words).
 * Only the two table-base address loads are swapped; the registers match.
 * Retry: Recover the order of the two table references.
 * No matching credit.
 */
extern int func_12A068(void *a0);
extern void *D_0020B928[];
extern int D_001EF228[];

void func_000A08(void)
{
    unsigned int i;
    int *dst;
    void **src;
    void *x;

    i = 0;
    dst = D_001EF228;
    src = D_0020B928;
    do {
        x = *src;
        i++;
        *dst = func_12A068(x);
        src++;
        dst++;
    } while (i < 6);
}
