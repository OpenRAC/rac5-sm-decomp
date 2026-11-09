/* LEVEL_16.REL:0x1100A8: reviewed 176-byte candidate, held for ABI review.
 * Guarded init sequence on a global record, stores a status and an id.
 * pinned C with gnu-ee-trial links 176/176 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_0CA860 returning void with no arguments, but the accepted
 * FRONTEND_003E10.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_001B4B5C;
extern void func_025C20(void);
extern int func_10FCF0(void);
extern int func_10FA78(int a);
extern unsigned int func_10FE00(void);
extern void func_0CA860(void);
extern void func_10FEF0(void);
extern void func_1105E0(void *a);

int func_1100A8(void *a0, void *a1)
{
    unsigned int s0;

    func_025C20();
    if (D_001B4B5C == 0) {
        return 0;
    }
    if (func_10FCF0() != 0) {
        return 0;
    }
    if (func_10FA78(1) != 0) {
        return 0;
    }
    s0 = func_10FE00();
    if (s0 == 0xFFFFFFFF) {
        return 0;
    }
    func_0CA860();
    func_10FEF0();
    func_1105E0(a1);
    *(int *)(D_001B4B5C + 4) = 2;
    *(unsigned int *)(D_001B4B5C + 0xC) = s0;
    return 1;
}
