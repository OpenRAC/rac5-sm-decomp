/* LEVEL_01.REL:0x049780: reviewed 12-byte candidate, held for ABI review.
 * Reserves a 96-byte stack frame and returns.
 * pinned C with gnu-ee-trial links 12/12 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It defines the function returning void with no arguments, but the accepted
 * caller LEVEL_01_049F48.c declares it returning void with (pointer, float,
 * float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_049780(void)
{
    char frame[0x60];
    (void)frame;
}
