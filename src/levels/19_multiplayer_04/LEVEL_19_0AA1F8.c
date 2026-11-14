/* LEVEL_19:0x0AA1F8 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001ABC04;

extern void func_0FADE0(void);
extern void func_112100(void);
extern void func_1117E8(void);
extern unsigned int func_0AA1E8(void);
extern int func_110118(int a);
extern unsigned int func_111C48(void);

unsigned int func_0AA1F8(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_0FADE0();
    func_112100();
    func_1117E8();
    if (func_0AA1E8() != 0) {
        ok = (func_110118(1) ^ 1) & 1;
        if (ok != 0) {
            D_001ABC04 = 0;
        }
    }
    r = func_111C48() != 0;
    return ok & r;
}
