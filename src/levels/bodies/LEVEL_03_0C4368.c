/* LEVEL_03:0x0C4368 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_00218A2C[];
extern unsigned int func_130878(int a0);
extern void func_0D6D38(int a0, unsigned int a1, int a2, int a3);
extern void func_026818(void);
extern void func_0B5E08(int a0);
extern void func_0D6B18(int a0);
extern void func_0BC960(int a0);
extern void func_01A590(int a0, int a1);

void func_0C4368(void)
{
    unsigned int r;

    r = func_130878(0x2F6);
    func_0D6D38(0, r, 0, 0);
    func_026818();
    if (*(unsigned char *)D_00218A2C != 0) {
        func_0B5E08(0);
        func_0D6B18(0);
        func_0BC960(0);
        func_01A590(4, 0);
    }
}
