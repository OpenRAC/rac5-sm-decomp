/* LEVEL_01.REL:0x04C168: reviewed 104-byte candidate, held for ABI review.
 * Returns 1 when the next indexed entry exists and its key is not above the
 * global limit.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_027FF0 returning pointer with (int), but the accepted
 * LEVEL_01_027FF0.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_028BD8(void);
extern char *func_027FF0(unsigned int index);
extern char *D_001F3FAC;
int func_04C168(char *object)
{
    int maximum = func_028BD8();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    char *next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_027FF0(index + 1U);
        if (next != 0) {
            int key = *(int *)(next + 4);
            if (!(*(int *)(D_001F3FAC + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
