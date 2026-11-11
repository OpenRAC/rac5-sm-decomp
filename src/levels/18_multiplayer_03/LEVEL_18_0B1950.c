/* LEVEL_18:0x0B1950 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001AE4F8;
extern unsigned int D_001AE4F4;
extern int D_001AE488;
extern int D_001AE48C;
extern void func_0F93F0(void);
extern void func_0F9360(unsigned int a);
extern void func_0946D8(void);

void func_0B1950(void)
{
    D_001AE4F8 = 0;
    if (D_001AE4F4 != 0xFFFFFFFFU) {
        func_0F93F0();
        func_0F9360(D_001AE4F4);
        D_001AE4F4 = 0xFFFFFFFFU;
    }
    func_0946D8();
    D_001AE488 = 0;
    D_001AE48C = 0;
}
