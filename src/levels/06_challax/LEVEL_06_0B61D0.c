/* LEVEL_06:0x0B61D0 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001EB904;

extern void func_110A98(void);
extern void func_12B3C0(void);
extern void func_12AAA8(void);
extern unsigned int func_0B61C0(void);
extern int func_1292C8(int a);
extern unsigned int func_12AF08(void);

unsigned int func_0B61D0(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_110A98();
    func_12B3C0();
    func_12AAA8();
    if (func_0B61C0() != 0) {
        ok = (func_1292C8(1) ^ 1) & 1;
        if (ok != 0) {
            D_001EB904 = 0;
        }
    }
    r = func_12AF08() != 0;
    return ok & r;
}
