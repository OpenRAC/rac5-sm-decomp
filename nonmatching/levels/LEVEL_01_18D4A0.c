/* USA LEVEL_01.REL:0x18D4A0, 132-byte candidate (14 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char D_00208600[];
extern char D_002237F8[];
extern int D_001F3FB8;
extern int D_00208704;
extern int func_0289E0(void);
extern void func_18D340(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_18D4A0(int arg)
{
    char *buf;
    int r;
    int k;

    r = func_0289E0();
    buf = D_00208600;
    k = 0;
    if (r < 5) {
        k = r;
    }
    sprintf(buf, D_002237F8, k, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_18D340(0);
    D_00208704 = D_001F3FB8 + 5;
}
