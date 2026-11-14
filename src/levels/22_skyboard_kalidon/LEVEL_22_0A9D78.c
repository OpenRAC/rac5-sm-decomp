/* LEVEL_22:0x0A9D78 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_0015BD84;

extern void func_0F4988(void);
extern void func_10C1C0(void);
extern void func_10B8A8(void);
extern unsigned int func_0A9D68(void);
extern int func_10A0C8(int a);
extern unsigned int func_10BD08(void);

unsigned int func_0A9D78(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_0F4988();
    func_10C1C0();
    func_10B8A8();
    if (func_0A9D68() != 0) {
        ok = (func_10A0C8(1) ^ 1) & 1;
        if (ok != 0) {
            D_0015BD84 = 0;
        }
    }
    r = func_10BD08() != 0;
    return ok & r;
}
