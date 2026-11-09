/* LEVEL_07.REL:0x1DC000: reviewed 92-byte candidate, held for ABI review.
 * Walks four words; each non-zero word is passed to two helpers and then
 * cleared.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 2
 * other USA placements, but the prototypes disagree.
 * It declares func_06F280 returning void with (int), but the accepted
 * LEVEL_07_06F280.c defines it returning void with no arguments.
 * It declares func_06ED48 returning void with (int), but the accepted
 * LEVEL_01_06DEC8.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_06F280(int a);
void func_06ED48(int a);

void func_1DC000(int unused, int *p)
{
    unsigned int i;
    int v;

    i = 0;
    do {
        v = *p;
        i++;
        if (v != 0) {
            func_06F280(v);
            func_06ED48(*p);
            *p = 0;
        }
        p++;
    } while (i < 4);
}
