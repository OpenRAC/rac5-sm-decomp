/* LEVEL_16.REL:0x116008: reviewed 100-byte candidate, held for ABI review.
 * Optionally configures a device, then calls two helpers per slot in a loop.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_0B9828 returning void with (int), but the accepted
 * LEVEL_16_0B9828.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_095168(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_029A58(void);
extern void func_0B9828(int a0);
extern void func_0B93E0(int a0);

void func_116008(int a0)
{
    int i;

    if (a0 != 0) {
        func_095168(0, 0x80000000u, 0x20, 0x20, 3, 0);
    }
    func_029A58();
    i = 0;
    do {
        func_0B9828(i);
        i++;
        func_0B93E0(20);
    } while (i < 2);
}
