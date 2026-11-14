/* LEVEL_07:0x0BD930 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_00210D04;

extern void func_11D518(void);
extern void func_137CF0(void);
extern void func_1373D8(void);
extern unsigned int func_0BD920(void);
extern int func_135BF8(int a);
extern unsigned int func_137838(void);

unsigned int func_0BD930(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_11D518();
    func_137CF0();
    func_1373D8();
    if (func_0BD920() != 0) {
        ok = (func_135BF8(1) ^ 1) & 1;
        if (ok != 0) {
            D_00210D04 = 0;
        }
    }
    r = func_137838() != 0;
    return ok & r;
}
