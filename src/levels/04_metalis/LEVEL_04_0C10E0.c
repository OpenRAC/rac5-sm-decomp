/* LEVEL_04:0x0C10E0 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_00215EC4;

extern void func_125A30(void);
extern void func_141170(void);
extern void func_140858(void);
extern unsigned int func_0C10D0(void);
extern int func_13F078(int a);
extern unsigned int func_140CB8(void);

unsigned int func_0C10E0(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_125A30();
    func_141170();
    func_140858();
    if (func_0C10D0() != 0) {
        ok = (func_13F078(1) ^ 1) & 1;
        if (ok != 0) {
            D_00215EC4 = 0;
        }
    }
    r = func_140CB8() != 0;
    return ok & r;
}
