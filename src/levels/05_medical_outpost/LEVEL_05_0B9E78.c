/* LEVEL_05:0x0B9E78 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001EBD84;

extern void func_1164E8(void);
extern void func_130668(void);
extern void func_12FD50(void);
extern unsigned int func_0B9E68(void);
extern int func_12E570(int a);
extern unsigned int func_1301B0(void);

unsigned int func_0B9E78(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_1164E8();
    func_130668();
    func_12FD50();
    if (func_0B9E68() != 0) {
        ok = (func_12E570(1) ^ 1) & 1;
        if (ok != 0) {
            D_001EBD84 = 0;
        }
    }
    r = func_1301B0() != 0;
    return ok & r;
}
