/* LEVEL_02.REL:0x0367D0: reviewed 120-byte candidate, held for ABI review.
 * Walks eight pointer slots in a sub-block, releasing each one and clearing a
 * global when it matches, then clears a flag byte.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It declares func_09DF10 returning void with (int), but the accepted
 * LEVEL_02_09DF10.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0020B358;

extern void func_09DF10(int a0);

void func_0367D0(char *a0)
{
    char *s2;
    int *s0;
    unsigned int i;

    s2 = *(char **)(a0 + 0x58);
    s0 = (int *)(s2 + 0x6C);
    i = 0;
    do {
        if (*s0 != 0) {
            if (*s0 == D_0020B358) {
                D_0020B358 = 0;
            } else {
                func_09DF10(*s0);
            }
            *s0 = 0;
        }
        i++;
        s0++;
    } while (i < 8);
    *(unsigned char *)(s2 + 0xAD) = 0;
}
