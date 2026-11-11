/* LEVEL_17:0x0B1EB8 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001A0678;
extern unsigned int D_001A0674;
extern int D_001A0608;
extern int D_001A060C;
extern void func_0FA1C8(void);
extern void func_0FA138(unsigned int a);
extern void func_094BC0(void);

void func_0B1EB8(void)
{
    D_001A0678 = 0;
    if (D_001A0674 != 0xFFFFFFFFU) {
        func_0FA1C8();
        func_0FA138(D_001A0674);
        D_001A0674 = 0xFFFFFFFFU;
    }
    func_094BC0();
    D_001A0608 = 0;
    D_001A060C = 0;
}
