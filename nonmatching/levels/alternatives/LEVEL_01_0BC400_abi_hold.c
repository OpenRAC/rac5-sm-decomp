/* LEVEL_01.REL:0x0BC400: reviewed 184-byte candidate, held for ABI review.
 * Gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success.
 * pinned C with gnu-ee-trial links 184/184 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int, int), but the accepted
 * caller LEVEL_01_0BC310.c declares it returning void with (pointer, pointer).
 * It defines the function returning int with (int, int), but the accepted
 * caller LEVEL_01_0C6BB8.c declares it returning void with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_01A868(int a);
extern int func_01A898(void);
extern int func_0A7330(void);
extern void func_0BC2B8(int a);
extern void func_01A828(int a, int b);

extern int D_00328A3C;
extern int D_001FCA90;
extern char D_00328A4C;

int func_0BC400(int a, int b)
{
    int result = 0;

    if (func_01A868(6) != 0)
        return 0;
    if (func_01A898() != 0)
        return 0;
    if (func_0A7330() != 0)
        return 0;
    if (a == 2 && D_00328A3C != 0)
        return 0;
    func_0BC2B8(a);
    if (D_001FCA90 == 0) {
        func_01A828(6, a);
        result = 1;
        D_00328A4C = b;
    }
    return result;
}
