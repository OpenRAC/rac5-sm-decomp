/* LEVEL_16:0x0AA920 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001AAA84;

extern void func_0FABB8(void);
extern void func_111A60(void);
extern void func_111148(void);
extern unsigned int func_0AA910(void);
extern int func_10FA78(int a);
extern unsigned int func_1115A8(void);

unsigned int func_0AA920(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_0FABB8();
    func_111A60();
    func_111148();
    if (func_0AA910() != 0) {
        ok = (func_10FA78(1) ^ 1) & 1;
        if (ok != 0) {
            D_001AAA84 = 0;
        }
    }
    r = func_1115A8() != 0;
    return ok & r;
}
