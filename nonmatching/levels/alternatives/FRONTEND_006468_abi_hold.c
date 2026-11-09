/* FRONTEND.REL:0x006468: reviewed 80-byte candidate, held for ABI review.
 * Stores a 64-bit difference into a ring slot.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It declares func_007A58 returning long long with no arguments, but the held
 * byte-exact candidate FRONTEND_007A58.c defines it returning void with no
 * arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern long long func_007A58(void);
extern long long D_0002B010;
extern unsigned int D_0002B020;
extern int D_0010EB40[];

void func_006468(void)
{
    long long result = func_007A58();
    D_0010EB40[D_0002B020 & 0x1f] = (int)(result - D_0002B010);
}
