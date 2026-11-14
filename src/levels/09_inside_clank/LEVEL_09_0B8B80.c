/* LEVEL_09:0x0B8B80 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001E6804;

extern void func_1138B8(void);
extern void func_12DC88(void);
extern void func_12D370(void);
extern unsigned int func_0B8B70(void);
extern int func_12BB90(int a);
extern unsigned int func_12D7D0(void);

unsigned int func_0B8B80(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_1138B8();
    func_12DC88();
    func_12D370();
    if (func_0B8B70() != 0) {
        ok = (func_12BB90(1) ^ 1) & 1;
        if (ok != 0) {
            D_001E6804 = 0;
        }
    }
    r = func_12D7D0() != 0;
    return ok & r;
}
