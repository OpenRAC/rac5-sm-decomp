/* LEVEL_02:0x0C21E0 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_002119C4;

extern void func_120810(void);
extern void func_13B0A0(void);
extern void func_13A788(void);
extern unsigned int func_0C21D0(void);
extern int func_138FA8(int a);
extern unsigned int func_13ABE8(void);

unsigned int func_0C21E0(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_120810();
    func_13B0A0();
    func_13A788();
    if (func_0C21D0() != 0) {
        ok = (func_138FA8(1) ^ 1) & 1;
        if (ok != 0) {
            D_002119C4 = 0;
        }
    }
    r = func_13ABE8() != 0;
    return ok & r;
}
