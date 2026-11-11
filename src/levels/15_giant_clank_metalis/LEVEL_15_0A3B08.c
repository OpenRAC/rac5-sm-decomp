/* LEVEL_15:0x0A3B08 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_00153C80;
extern unsigned int D_00153C7C;
extern int D_00153C10;
extern int D_00153C14;
extern void func_0DE828(void);
extern void func_0DE798(unsigned int a);
extern void func_086D10(void);

void func_0A3B08(void)
{
    D_00153C80 = 0;
    if (D_00153C7C != 0xFFFFFFFFU) {
        func_0DE828();
        func_0DE798(D_00153C7C);
        D_00153C7C = 0xFFFFFFFFU;
    }
    func_086D10();
    D_00153C10 = 0;
    D_00153C14 = 0;
}
