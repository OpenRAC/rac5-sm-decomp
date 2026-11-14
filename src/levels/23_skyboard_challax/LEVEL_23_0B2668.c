/* LEVEL_23:0x0B2668 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001CFE04;

extern void func_10BA30(void);
extern void func_126468(void);
extern void func_125B50(void);
extern unsigned int func_0B2658(void);
extern int func_124370(int a);
extern unsigned int func_125FB0(void);

unsigned int func_0B2668(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_10BA30();
    func_126468();
    func_125B50();
    if (func_0B2658() != 0) {
        ok = (func_124370(1) ^ 1) & 1;
        if (ok != 0) {
            D_001CFE04 = 0;
        }
    }
    r = func_125FB0() != 0;
    return ok & r;
}
