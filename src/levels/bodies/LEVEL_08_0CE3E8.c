/* LEVEL_08:0x0CE3E8 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_00247EC0;
extern unsigned int D_00247EBC;
extern int D_00247E50;
extern int D_00247E54;
extern void func_12AC68(void);
extern void func_12ABD8(unsigned int a);
extern void func_0B0D40(void);

void func_0CE3E8(void)
{
    D_00247EC0 = 0;
    if (D_00247EBC != 0xFFFFFFFFU) {
        func_12AC68();
        func_12ABD8(D_00247EBC);
        D_00247EBC = 0xFFFFFFFFU;
    }
    func_0B0D40();
    D_00247E50 = 0;
    D_00247E54 = 0;
}
