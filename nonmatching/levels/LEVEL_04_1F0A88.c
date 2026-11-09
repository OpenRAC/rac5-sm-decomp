/* LEVEL_04.REL:0x1F0A88: reviewed 164-byte candidate, held for ABI review.
 * Sets three global status words when they still hold their initial values.
 * pinned C with gnu-ee-trial links 164/164 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_109210 returning int with (int), but the accepted
 * LEVEL_04_109210.c defines it returning void with (int).
 * It declares func_1364E8 returning int with (int), but the accepted
 * LEVEL_04_1364E8.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00222D1C;
extern int D_00222D20;
extern int D_00222D24;
extern int D_002B25C8;
extern int D_002B268C;
extern int func_0E8A88(int a0);
extern int func_109210(int a0);
extern int func_1364E8(int a0);

void func_1F0A88(void)
{
    if (D_00222D1C == -1) {
        D_00222D1C = func_0E8A88((D_002B25C8 << 16) | 0xA00070D9);
    }
    if (D_00222D20 == -1) {
        D_00222D20 = func_109210((D_002B268C << 16) | 0xC0007041);
    }
    if (D_00222D24 == 0) {
        D_00222D24 = func_1364E8(0x7530DCC3);
    }
}
