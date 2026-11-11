/* LEVEL_03:0x0C32A8 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_00217680;
extern unsigned int D_0021767C;
extern int D_00217610;
extern int D_00217614;
extern void func_118638(void);
extern void func_1185A8(unsigned int a);
extern void func_0A61C8(void);

void func_0C32A8(void)
{
    D_00217680 = 0;
    if (D_0021767C != 0xFFFFFFFFU) {
        func_118638();
        func_1185A8(D_0021767C);
        D_0021767C = 0xFFFFFFFFU;
    }
    func_0A61C8();
    D_00217610 = 0;
    D_00217614 = 0;
}
