/* LEVEL_17:0x0A9E60 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_0019E084;

extern void func_0FA1C8(void);
extern void func_110FD8(void);
extern void func_1106C0(void);
extern unsigned int func_0A9E50(void);
extern int func_10EFF0(int a);
extern unsigned int func_110B20(void);

unsigned int func_0A9E60(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_0FA1C8();
    func_110FD8();
    func_1106C0();
    if (func_0A9E50() != 0) {
        ok = (func_10EFF0(1) ^ 1) & 1;
        if (ok != 0) {
            D_0019E084 = 0;
        }
    }
    r = func_110B20() != 0;
    return ok & r;
}
