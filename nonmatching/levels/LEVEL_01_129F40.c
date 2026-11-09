/* LEVEL_01.REL:0x129F40: reviewed 112-byte candidate, held for ABI review.
 * Runs a locator and a parser on a 2 KiB scratch buffer, returning an offset
 * word or zero.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_11A148 returning void with (pointer), but the accepted
 * LEVEL_01_11A148.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void *func_119E40(void *a, void *b);
int func_119FF0(void *buf, int size, int mode, void *obj);
void func_11A148(void *obj);
extern char D_00217F48[];

int func_129F40(void *a0)
{
    int buf[512];
    void *s0;

    s0 = func_119E40(a0, D_00217F48);
    if (s0 != 0) {
        if (func_119FF0(buf, 2048, 1, s0) == 1) {
            func_11A148(s0);
            return buf[15] + 0xC0;
        }
        func_11A148(s0);
    }
    return 0;
}
