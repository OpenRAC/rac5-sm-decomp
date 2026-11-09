/* LEVEL_01.REL:0x0D5098: reviewed 72-byte candidate, held for ABI review.
 * Calls four local helpers in sequence, the third with a data address.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_133F70 returning void with no arguments, but the accepted
 * LEVEL_01_133F70.c defines it returning int with no arguments.
 * It declares func_001088 returning void with (int, pointer, int), but the
 * accepted LEVEL_01_001088.c defines it returning void with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_133F70(void);
extern void func_0A6448(void);
extern void func_001088(int, char *, int);
extern void func_03C120(int);
extern void func_0B6020(int);
extern char D_00003008[];

void func_0D5098(void)
{
    func_133F70();
    func_0A6448();
    func_001088(0, D_00003008, 0);
    func_03C120(1);
    func_0B6020(7);
}
