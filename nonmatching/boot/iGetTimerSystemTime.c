/* iGetTimerSystemTime 0x01ED99E0 (14 November 2026).
 * Measured sdk991111: 25 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
extern unsigned long long D_01EFFF90;

unsigned long long iGetTimerSystemTime(void) {
    unsigned long long lo;
    unsigned long long hi;
    unsigned int mode;
    unsigned int shift;
    unsigned int sel;

    lo = *(volatile unsigned int *)0x10001000;
    mode = *(volatile unsigned int *)0x10001010;
    hi = D_01EFFF90;
    if (mode & 0x800) {
        lo = *(volatile unsigned int *)0x10001000;
        hi += 1;
    }
    sel = mode & 3;
    shift = 2;
    if (sel == 0) shift = 0;
    shift <<= sel;
    return (lo | (hi << 16)) << shift;
}
