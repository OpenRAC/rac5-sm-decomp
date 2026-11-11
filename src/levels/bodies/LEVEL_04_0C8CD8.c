/* LEVEL_04:0x0C8CD8 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_002184C0;
extern unsigned int D_002184BC;
extern int D_00218450;
extern int D_00218454;
extern void func_125A30(void);
extern void func_1259A0(unsigned int a);
extern void func_0AB658(void);

void func_0C8CD8(void)
{
    D_002184C0 = 0;
    if (D_002184BC != 0xFFFFFFFFU) {
        func_125A30();
        func_1259A0(D_002184BC);
        D_002184BC = 0xFFFFFFFFU;
    }
    func_0AB658();
    D_00218450 = 0;
    D_00218454 = 0;
}
