/* LEVEL_01.REL:0x0DAEB8: reviewed 136-byte candidate, held for ABI review.
 * One-time setup gated on two state queries, then sets a ready flag.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_132DB0 returning int with (int), but the accepted
 * FRONTEND_020780.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_0274B0(int a, int b);
extern int func_132DB0(int a);
extern int func_01A868(int a);
extern int func_0BBD30(void);
extern void func_0274D0(int a, int b, int c);
extern void func_0D7440(int a, int b, int c);
extern unsigned char D_00206748[];

void func_0DAEB8(void)
{
    if (func_0274B0(0x91, 0) != 0) {
        return;
    }
    if (func_132DB0(0) != 3) {
        return;
    }
    if (func_01A868(6) != 0) {
        if (func_0BBD30() == 0x38) {
            return;
        }
    }
    func_0274D0(0x91, 1, 0);
    func_0D7440(3, 0xA1D, 0x21A);
    D_00206748[0] = 1;
}
