/* LEVEL_05:0x0C1A68 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001EE380;
extern unsigned int D_001EE37C;
extern int D_001EE310;
extern int D_001EE314;
extern void func_1164E8(void);
extern void func_116458(unsigned int a);
extern void func_0A4A08(void);

void func_0C1A68(void)
{
    D_001EE380 = 0;
    if (D_001EE37C != 0xFFFFFFFFU) {
        func_1164E8();
        func_116458(D_001EE37C);
        D_001EE37C = 0xFFFFFFFFU;
    }
    func_0A4A08();
    D_001EE310 = 0;
    D_001EE314 = 0;
}
