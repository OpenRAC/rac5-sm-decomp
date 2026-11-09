/* LEVEL_01.REL:0x0F0210: reviewed 84-byte candidate, held for ABI review.
 * Calls three sub-initialisers on fixed offsets, and a fourth only when the
 * flag argument is non-zero.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_0F01F0 returning void with (pointer), but the accepted
 * LEVEL_01_0F01F0.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_0F01A8(unsigned char *p);
void func_0F01C0(unsigned char *p);
void func_0F01D8(unsigned char *p);
void func_0F01F0(unsigned char *p);

void func_0F0210(unsigned char *o, int flag)
{
    func_0F01A8(o + 0x04);
    func_0F01C0(o + 0x44);
    func_0F01D8(o + 0x88);
    if (flag) {
        func_0F01F0(o + 0xF0);
    }
}
