/* LEVEL_01.REL:0x0A6A70: reviewed 176-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_0AD380.c.
 * pinned C with gnu-ee-trial links 176/176 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning int with (int, int), but the accepted
 * caller LEVEL_01_0A6670.c declares it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_001F68E0;
extern int D_001F68E4;
extern int D_001F7060[][3];
extern int func_0A69A0(unsigned int slot);
extern void func_0A7360(int prev, int mode);

int func_0A6A70(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001F68E4;
    if (func_0A69A0(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001F7060[slot][mode] == 0)
        return 0;
    D_001F68E0 = slot;
    D_001F68E4 = mode;
    if (prev != mode)
        func_0A7360(prev, mode);
    return 1;
}
