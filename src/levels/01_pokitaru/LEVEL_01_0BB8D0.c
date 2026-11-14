/* LEVEL_01:0x0BB8D0 -- runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001FCA04;

extern void func_11A4C8(void);
extern void func_134CF0(void);
extern void func_1343D8(void);
extern unsigned int func_0BB8C0(void);
extern int func_132BF8(int a);
extern unsigned int func_134838(void);

unsigned int func_0BB8D0(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_11A4C8();
    func_134CF0();
    func_1343D8();
    if (func_0BB8C0() != 0) {
        ok = (func_132BF8(1) ^ 1) & 1;
        if (ok != 0) {
            D_001FCA04 = 0;
        }
    }
    r = func_134838() != 0;
    return ok & r;
}
