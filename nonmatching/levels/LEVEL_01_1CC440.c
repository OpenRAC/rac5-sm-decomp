/* LEVEL_01.REL:0x1CC440: reviewed 84-byte candidate, held for ABI review.
 * Clears a pending flag and calls two helpers, then sets a completion byte.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and
 * 13 other USA placements, but the prototypes disagree.
 * It declares func_1CC288 returning void with (pointer), but the accepted
 * LEVEL_01_1CC288.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_00398818;

void func_1CC288(void *a0);
void func_1CC2D0(void *a0);

void func_1CC440(void *a0)
{
    if (D_00398818.b_10 != 0) {
        func_1CC288(a0);
        D_00398818.b_10 = 0;
    }
    func_1CC2D0(a0);
    D_00398818.b_11 = 1;
}
