/* LEVEL_16.REL:0x037F38: reviewed 104-byte candidate, held for ABI review.
 * Sets a flag field in each non-null record of a six-entry table, then updates
 * a 64-bit word.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, int), but the accepted
 * caller LEVEL_16_037FA0.c declares it returning void with (pointer, pointer).
 * It defines the function returning void with (pointer, int), but the accepted
 * caller LEVEL_16_037FC8.c declares it returning void with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec4 {
    char pad0[0x64];
    int w64;
};

void func_037F38(char *a0, int a1)
{
    int flag;
    int shifted;
    int mask;
    unsigned int i;
    struct Rec4 **q;
    struct Rec4 *p;

    flag = (a1 ^ 1) & 1;
    i = 0;
    mask = -33;
    shifted = flag << 5;
    q = (struct Rec4 **)(a0 + 0x5B8);
    do {
        p = *q;
        i++;
        if (p != 0) {
            p->w64 = (p->w64 & mask) | shifted;
        }
        q++;
    } while (i < 6);
    *(long long *)(a0 + 0x968) = (*(long long *)(a0 + 0x968) & -129) | ((long long)(a1 & 1) << 7);
}
