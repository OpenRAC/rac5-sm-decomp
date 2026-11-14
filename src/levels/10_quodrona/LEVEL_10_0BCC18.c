/* LEVEL_10:0x0BCC18 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_00205A04;

extern void func_1186E0(void);
extern void func_132B70(void);
extern void func_132258(void);
extern unsigned int func_0BCC08(void);
extern int func_130A58(int a);
extern unsigned int func_1326B8(void);

unsigned int func_0BCC18(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_1186E0();
    func_132B70();
    func_132258();
    if (func_0BCC08() != 0) {
        ok = (func_130A58(1) ^ 1) & 1;
        if (ok != 0) {
            D_00205A04 = 0;
        }
    }
    r = func_1326B8() != 0;
    return ok & r;
}
