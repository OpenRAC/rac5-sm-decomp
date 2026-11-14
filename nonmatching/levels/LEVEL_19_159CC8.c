/* USA LEVEL_19.REL:0x159CC8, 108-byte candidate (14 November 2026).
 * Measured pinned: 24 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void func_0154A0(void *o, int a, int b, int c);
extern void func_06F9A8(void *o, int a);

int func_159CC8(void *o, int event)
{
    if (event == 6) {
        func_0154A0(o, 1, 0, 0);
        return 0;
    }
    if (event != 7) {
        if (event == 10) {
            func_06F9A8(o, 1);
            return 3;
        }
        return 0;
    }
    func_0154A0(o, 0, 0, 0);
    return 0;
}
