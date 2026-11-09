/* LEVEL_01.REL:0x0A34F8: reviewed 180-byte candidate, held for ABI review.
 * Stores a value into an indexed table of a typed entry when the slot is below
 * the entry count.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_0A07C8 returning pointer with (pointer), but the accepted
 * FRONTEND_005C80.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0029F008[];
extern unsigned int *func_0A0850(char *object, int unused0, int unused1);
extern char *func_0A07C8(char *object);
unsigned int func_0A34F8(int index, unsigned int slot, unsigned int value)
{
    char *object = D_0029F008 + index * 100;
    unsigned int *values = func_0A0850(object, 0, 0);
    unsigned int result = 0;
    char *entry = func_0A07C8(object);
    if (entry == 0)
        return 0;
    if (*(unsigned short *)(entry + 4) != 3)
        return 0;
    if (slot < *(unsigned short *)(entry + 8)) {
        result = 1;
        values[slot] = value;
    }
    return result;
}
