/* LEVEL_16:0x0B2978 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001AD078;
extern unsigned int D_001AD074;
extern int D_001AD008;
extern int D_001AD00C;
extern void func_0FABB8(void);
extern void func_0FAB28(unsigned int a);
extern void func_0956C8(void);

void func_0B2978(void)
{
    D_001AD078 = 0;
    if (D_001AD074 != 0xFFFFFFFFU) {
        func_0FABB8();
        func_0FAB28(D_001AD074);
        D_001AD074 = 0xFFFFFFFFU;
    }
    func_0956C8();
    D_001AD008 = 0;
    D_001AD00C = 0;
}
