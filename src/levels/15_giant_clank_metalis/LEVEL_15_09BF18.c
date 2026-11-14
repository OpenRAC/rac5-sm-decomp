/* LEVEL_15:0x09BF18 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_00151684;

extern void func_0DE828(void);
extern void func_0F3BB8(void);
extern void func_0F32A0(void);
extern unsigned int func_09BF08(void);
extern int func_0F1AC0(int a);
extern unsigned int func_0F3700(void);

unsigned int func_09BF18(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_0DE828();
    func_0F3BB8();
    func_0F32A0();
    if (func_09BF08() != 0) {
        ok = (func_0F1AC0(1) ^ 1) & 1;
        if (ok != 0) {
            D_00151684 = 0;
        }
    }
    r = func_0F3700() != 0;
    return ok & r;
}
