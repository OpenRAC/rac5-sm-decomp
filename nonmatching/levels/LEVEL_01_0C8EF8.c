/* USA LEVEL_01.REL:0x0C8EF8, 56-byte candidate (14 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned char D_0032BE90[];
extern void func_135678(void);
extern void func_133010(int value);
extern int func_133670(void);
extern void sceCdReadClock(void *rtc);

void func_0C8EF8(void)
{
    func_135678();
    func_133010(0);
    func_133670();
    sceCdReadClock(D_0032BE90);
}
