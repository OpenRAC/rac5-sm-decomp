/* LEVEL_06:0x0BDDC0 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001EDF00;
extern unsigned int D_001EDEFC;
extern int D_001EDE90;
extern int D_001EDE94;
extern void func_110A98(void);
extern void func_110A08(unsigned int a);
extern void func_0A0C18(void);

void func_0BDDC0(void)
{
    D_001EDF00 = 0;
    if (D_001EDEFC != 0xFFFFFFFFU) {
        func_110A98();
        func_110A08(D_001EDEFC);
        D_001EDEFC = 0xFFFFFFFFU;
    }
    func_0A0C18();
    D_001EDE90 = 0;
    D_001EDE94 = 0;
}
