/* LEVEL_16.REL:0x118428: reviewed 156-byte candidate, held for ABI review.
 * Counts down a shared timer, then runs two checks and two dispatches.
 * pinned C with gnu-ee-trial links 156/156 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_000DD0 returning int with no arguments, but the accepted
 * LEVEL_16_000DD0.c defines it returning pointer with no arguments.
 * It declares func_0A4900 returning void with (int, pointer, int, int, int,
 * int), but the accepted LEVEL_16_0A4900.c defines it returning void with
 * (int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_001B84EC;
extern int func_000DD0(void);
extern int func_1155E0(void);
extern int func_112CE8(int i);
extern void func_0A4900(int a, char *b, int c, unsigned int d, int e, int f);
extern char D_00118648[];

void func_118428(void)
{
    unsigned int s0;
    int v;

    if (D_001B84EC != 0) {
        D_001B84EC = D_001B84EC - 1;
        return;
    }
    if (func_000DD0() == 0) {
        return;
    }
    if (func_1155E0() != 0) {
        return;
    }
    for (s0 = 0; s0 < 2; s0++) {
        v = func_112CE8(s0);
        func_0A4900(s0, D_00118648, v, 0xFFFFFFFF, 3, 0x1D6);
    }
}
