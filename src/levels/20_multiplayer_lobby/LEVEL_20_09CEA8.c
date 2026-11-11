/* LEVEL_20:0x09CEA8 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_0010F758;
extern unsigned int D_0010F754;
extern int D_0010F6E8;
extern int D_0010F6EC;
extern void func_0D3A18(void);
extern void func_0D3988(unsigned int a);
extern void func_07FDC0(void);

void func_09CEA8(void)
{
    D_0010F758 = 0;
    if (D_0010F754 != 0xFFFFFFFFU) {
        func_0D3A18();
        func_0D3988(D_0010F754);
        D_0010F754 = 0xFFFFFFFFU;
    }
    func_07FDC0();
    D_0010F6E8 = 0;
    D_0010F6EC = 0;
}
