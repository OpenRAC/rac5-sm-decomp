/* LEVEL_02.REL:0x034688: reviewed 92-byte candidate, held for ABI review.
 * A helper writes a result byte into the object and a stack flag; a second
 * helper runs; returns the flag byte.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_034880 returning int with (pointer, int, pointer), but the
 * accepted LEVEL_02_034880.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char func_034880(char *a0, int a1, unsigned char *a2);
extern void func_034A20(char *a0, int a1, int a2);

unsigned char func_034688(char *a0, int a1, int a2)
{
    unsigned char flag;

    flag = 0;
    a0[0x2C] = func_034880(a0, a1, &flag);
    func_034A20(a0, a1, a2);
    return flag;
}
