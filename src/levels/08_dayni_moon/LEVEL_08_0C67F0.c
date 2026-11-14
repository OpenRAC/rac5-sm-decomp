/* LEVEL_08:0x0C67F0 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_002458C4;

extern void func_12AC68(void);
extern void func_146228(void);
extern void func_145910(void);
extern unsigned int func_0C67E0(void);
extern int func_144130(int a);
extern unsigned int func_145D70(void);

unsigned int func_0C67F0(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_12AC68();
    func_146228();
    func_145910();
    if (func_0C67E0() != 0) {
        ok = (func_144130(1) ^ 1) & 1;
        if (ok != 0) {
            D_002458C4 = 0;
        }
    }
    r = func_145D70() != 0;
    return ok & r;
}
