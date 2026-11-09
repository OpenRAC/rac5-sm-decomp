/* LEVEL_01.REL:0x0BCA80: reviewed 136-byte candidate, held for ABI review.
 * Records a mode value in a state block (returning 0 when unchanged or when
 * the mode-4 helper refuses), with an optional helper call when leaving mode
 * 1.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int), but the accepted caller
 * LEVEL_01_0C6BB8.c declares it returning void with (int).
 * It defines the function returning int with (int), but the accepted caller
 * LEVEL_01_0BB2F0.c declares it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_02A410(void);
extern void func_087DE8(int a);
extern unsigned char D_00328A30[];

int func_0BCA80(int a0)
{
    unsigned char *s1;

    D_00328A30[0x1D] = 0;
    if (a0 == *(int *)(D_00328A30 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_02A410() == 0) {
            return 0;
        }
    }
    s1 = D_00328A30;
    if (*(int *)(s1 + 0x10) == 1) {
        func_087DE8(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
