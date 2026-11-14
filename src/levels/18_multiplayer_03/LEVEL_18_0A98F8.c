/* LEVEL_18:0x0A98F8 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_001ABF04;

extern void func_0F93F0(void);
extern void func_110710(void);
extern void func_10FDF8(void);
extern unsigned int func_0A98E8(void);
extern int func_10E728(int a);
extern unsigned int func_110258(void);

unsigned int func_0A98F8(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_0F93F0();
    func_110710();
    func_10FDF8();
    if (func_0A98E8() != 0) {
        ok = (func_10E728(1) ^ 1) & 1;
        if (ok != 0) {
            D_001ABF04 = 0;
        }
    }
    r = func_110258() != 0;
    return ok & r;
}
