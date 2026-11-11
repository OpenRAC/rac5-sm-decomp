/* LEVEL_10:0x0C4810 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_00208000;
extern unsigned int D_00207FFC;
extern int D_00207F90;
extern int D_00207F94;
extern void func_1186E0(void);
extern void func_118650(unsigned int a);
extern void func_0A7560(void);

void func_0C4810(void)
{
    D_00208000 = 0;
    if (D_00207FFC != 0xFFFFFFFFU) {
        func_1186E0();
        func_118650(D_00207FFC);
        D_00207FFC = 0xFFFFFFFFU;
    }
    func_0A7560();
    D_00207F90 = 0;
    D_00207F94 = 0;
}
