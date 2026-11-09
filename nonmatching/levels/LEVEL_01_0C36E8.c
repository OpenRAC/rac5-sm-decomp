/* LEVEL_01.REL:0x0C36E8: reviewed 132-byte candidate, held for ABI review.
 * Reads a status word and runs the matching startup or fallback calls.
 * pinned C with gnu-ee-trial links 132/132 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_088020 returning int with (int), but the accepted
 * LEVEL_01_088020.c defines it returning int with (long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_088020(int a);
extern void func_0B6020(int a);
extern void func_01A828(int a, int b);
extern int func_0BCB20(void);

void func_0C36E8(void)
{
    int v;

    v = func_088020(0x6B10);
    if (v & 8) {
        func_0B6020(7);
        func_0B6020(0);
        func_01A828(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B6020(0);
        func_0B6020(7);
        if (func_0BCB20() == 0) {
            func_01A828(4, 0);
        }
    }
}
