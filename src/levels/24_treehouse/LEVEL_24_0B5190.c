/* LEVEL_24:0x0B5190 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001CD684;

extern void func_110730(void);
extern void func_12A7F0(void);
extern void func_129ED8(void);
extern unsigned int func_0B5180(void);
extern int func_1286F8(int a);
extern unsigned int func_12A338(void);

unsigned int func_0B5190(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_110730();
    func_12A7F0();
    func_129ED8();
    if (func_0B5180() != 0) {
        ok = (func_1286F8(1) ^ 1) & 1;
        if (ok != 0) {
            D_001CD684 = 0;
        }
    }
    r = func_12A338() != 0;
    return ok & r;
}
