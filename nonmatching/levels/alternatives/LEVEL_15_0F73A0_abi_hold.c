/* LEVEL_15.REL:0x0F73A0: reviewed 48-byte candidate, held for ABI review.
 * Clears one flag word in a global block after a call.
 * pinned C with gnu-ee-trial links 48/48 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_097980 returning void with (int), but the accepted
 * LEVEL_15_097980.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002A8B58[];
extern void func_097980(int);

void func_0F73A0(void)
{
    unsigned int high;
    char *block;

    func_097980(0);
    high = 0x40000;
    block = D_002A8B58;
    *(int *)(block + high + 0x4048) = 0;
}
