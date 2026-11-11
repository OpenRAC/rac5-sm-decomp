/* LEVEL_01:0x0C34C0 -- clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001FF000;
extern unsigned int D_001FEFFC;
extern int D_001FEF90;
extern int D_001FEF94;
extern void func_11A4C8(void);
extern void func_11A438(unsigned int a);
extern void func_0A6448(void);

void func_0C34C0(void)
{
    D_001FF000 = 0;
    if (D_001FEFFC != 0xFFFFFFFFU) {
        func_11A4C8();
        func_11A438(D_001FEFFC);
        D_001FEFFC = 0xFFFFFFFFU;
    }
    func_0A6448();
    D_001FEF90 = 0;
    D_001FEF94 = 0;
}
