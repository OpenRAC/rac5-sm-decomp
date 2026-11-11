/* LEVEL_19:0x0B2250 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001AE1F8;
extern unsigned int D_001AE1F4;
extern int D_001AE188;
extern int D_001AE18C;
extern void func_0FADE0(void);
extern void func_0FAD50(unsigned int a);
extern void func_094F58(void);

void func_0B2250(void)
{
    D_001AE1F8 = 0;
    if (D_001AE1F4 != 0xFFFFFFFFU) {
        func_0FADE0();
        func_0FAD50(D_001AE1F4);
        D_001AE1F4 = 0xFFFFFFFFU;
    }
    func_094F58();
    D_001AE188 = 0;
    D_001AE18C = 0;
}
