/* LEVEL_03:0x0BB6B8 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_00215084;

extern void func_118638(void);
extern void func_1330B8(void);
extern void func_1327A0(void);
extern unsigned int func_0BB6A8(void);
extern int func_130FC0(int a);
extern unsigned int func_132C00(void);

unsigned int func_0BB6B8(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_118638();
    func_1330B8();
    func_1327A0();
    if (func_0BB6A8() != 0) {
        ok = (func_130FC0(1) ^ 1) & 1;
        if (ok != 0) {
            D_00215084 = 0;
        }
    }
    r = func_132C00() != 0;
    return ok & r;
}
