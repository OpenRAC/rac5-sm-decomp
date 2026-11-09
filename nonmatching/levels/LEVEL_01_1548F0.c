/* LEVEL_01.REL:0x1548F0: reviewed 112-byte candidate, held for ABI review.
 * Fills five words of a table with results from a helper over a strided record
 * array.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 10 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning int with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_0021D3A0[];
extern int D_00391B98[];
extern int func_12A068(int a);

void func_1548F0(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_00391B98[i] = func_12A068(D_0021D3A0[i].f10);
    }
}
