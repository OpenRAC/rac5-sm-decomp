/* LEVEL_01.REL:0x0D7680: reviewed 80-byte candidate, held for ABI review.
 * Calls a test helper and dispatches on its result with code 0x22.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_01A868 returning pointer with (int), but the accepted
 * LEVEL_01_01A868.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *func_01A868(int);
extern int func_0BBD30(void);
extern void func_0BB3A8(int);
extern void func_0BC400(int, int);

void func_0D7680(void)
{
    if (func_01A868(6) != 0) {
        int code = func_0BBD30();
        if ((code ^ 0x22) != 0) {
            func_0BB3A8(0x22);
        }
    } else {
        func_0BC400(0x22, 0);
    }
}
