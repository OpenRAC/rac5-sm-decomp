/* LEVEL_24:0x0A9948 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_001CCA88;
extern unsigned char D_001CCC50;
extern unsigned char D_001CCD90;
extern unsigned char D_001CCA64;
extern unsigned char D_001CCA65;
extern unsigned char D_001CCD91;
extern unsigned char D_001CCD92;
extern int D_001CCD94;
extern unsigned int D_001C7E48;
extern unsigned char D_001D2270;
extern char D_002E9460[];
extern char D_002E9568[];
extern char D_001E2160[];
extern char D_001E2170[];

extern void func_0A98B0(void);
extern void func_127418(void *p);
extern void func_0A23B8(void);
extern void func_0A9E68(void);
extern void func_0A9B38(void);
extern void func_0A9CF0(void);
extern void func_0ABB10(int a, int b, float x, float y);
extern void func_0AED38(int a, void *b, void *c, int d);
extern void func_0A8320(unsigned int a, unsigned int b, float f);
extern void func_0AF320(void);
extern void func_0B0808(void);
extern void func_0AB5E0(void);
extern void func_0AB090(void);
extern void func_0AFAA8(void);
extern void func_0ABC18(void);
extern void func_0AF0D0(void);
extern void func_0AE518(void);
extern void func_0AC020(void);
extern void func_0AE230(void);
extern void func_0AC998(void);
extern void func_0AA808(void);
extern void func_0A2518(unsigned int a);
extern void func_0AEA80(void);
extern void func_0AE160(void);
extern void func_09F6E0(int a);
extern void func_0C4378(void);
extern void func_0A28B0(void);

void func_0A9948(void)
{
    if (D_001CCA88) {
        func_0A98B0();
        func_127418(D_002E9460);
        if (D_001CCC50) {
            func_0A23B8();
        } else {
            if (D_001CCD90) func_0A9E68();
            if (D_001CCA64) func_0A9B38();
            if (D_001CCA65) func_0A9CF0();
            if (D_001CCD91) {
                D_001CCD91 = 0;
                func_0ABB10(52, 90, 100.0f, 75.0f);
            }
            if (D_001CCD92) {
                D_001CCD92 = 0;
                D_001CCD94 = 120;
            }
            if (D_001CCD94 != 0) {
                func_0AED38(1, D_001E2160, D_001E2170, 0);
                D_001CCD94--;
            }
            if (D_001C7E48 != 0xFFFFFFFF) func_0A8320(D_001C7E48, 0xFFFFFFFF, 0.0f);
            func_0AF320();
            func_0B0808();
            func_0AB5E0();
            func_0AB090();
            func_0AFAA8();
            func_0ABC18();
            func_0AF0D0();
            func_0AE518();
            func_0AC020();
            func_0AE230();
            func_0AC998();
            func_0AA808();
            func_0A2518(0xFFFFFFFF);
            func_127418(D_002E9568);
            func_0AEA80();
            func_0AE160();
            func_09F6E0(0);
            if (D_001D2270) func_0C4378();
            func_0A28B0();
        }
    }
}
