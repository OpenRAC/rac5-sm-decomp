/* LEVEL_01.REL:0x0AD4D8: reviewed 68-byte candidate, held for ABI review.
 * Forwards one table entry and five arguments to a shared helper.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (int, int, int, int, int), but
 * the accepted caller LEVEL_01_0BB4F0.c declares it returning void with (int,
 * int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *D_001FB9D0[];
extern void func_0AD1F8(void *, short, short, unsigned short, unsigned short);

void func_0AD4D8(int index, short first, short second,
                 unsigned short third, unsigned short fourth)
{
    func_0AD1F8(D_001FB9D0[index], first, second, third, fourth);
}
