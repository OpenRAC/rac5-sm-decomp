/* LEVEL_01.REL:0x0544E0: reviewed 76-byte candidate, held for ABI review.
 * Kind 9 calls a helper; other kinds store 7 or 8 at +0xC6C.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_06AB98 returning void with no arguments, but the accepted
 * LEVEL_01_06AB98.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_06AB98(void);

void func_0544E0(char *record)
{
    int kind = *(unsigned short *)(record + 0x108);
    unsigned long d;
    if (kind == 9) {
        func_06AB98();
    } else {
        d = (kind - 2) & 0xFFFF;
        if (d < 2)
            *(int *)(record + 0xc6c) = 8;
        else
            *(int *)(record + 0xc6c) = 7;
    }
}