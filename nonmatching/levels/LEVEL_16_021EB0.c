/* LEVEL_16.REL:0x021EB0: reviewed 96-byte candidate, held for ABI review.
 * Validates two indices and a value, then stores the value into a 2-D record
 * table.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int, int, int), but the accepted
 * caller LEVEL_16_021F10.c declares it returning void with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Cell021EB0 {
    char pad00[0x3C];
    unsigned int f3C;
    char pad40[0x54 - 0x40];
};

extern struct Cell021EB0 D_0019F078[25][5];

int func_021EB0(unsigned int a0, unsigned int a1, int a2)
{
    unsigned int val;
    int col;

    val = a1;
    col = a2 + 1;
    if (a0 < 25 && val < 8 && col >= 0 && col < 6) {
        D_0019F078[a0][col].f3C = val;
        return 1;
    }
    return 0;
}
