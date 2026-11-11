/* LEVEL_24:0x0BCD88 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001CFC80;
extern unsigned int D_001CFC7C;
extern int D_001CFC10;
extern int D_001CFC14;
extern void func_110730(void);
extern void func_1106A0(unsigned int a);
extern void func_09FCC0(void);

void func_0BCD88(void)
{
    D_001CFC80 = 0;
    if (D_001CFC7C != 0xFFFFFFFFU) {
        func_110730();
        func_1106A0(D_001CFC7C);
        D_001CFC7C = 0xFFFFFFFFU;
    }
    func_09FCC0();
    D_001CFC10 = 0;
    D_001CFC14 = 0;
}
