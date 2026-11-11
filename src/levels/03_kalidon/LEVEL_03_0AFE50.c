/* LEVEL_03:0x0AFE50 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_00214488;
extern unsigned char D_00214650;
extern unsigned char D_00214790;
extern unsigned char D_00214464;
extern unsigned char D_00214465;
extern unsigned char D_00214791;
extern unsigned char D_00214792;
extern int D_00214794;
extern unsigned int D_0020F848;
extern unsigned char D_00219C70;
extern char D_00338420[];
extern char D_00338528[];
extern char D_0022A2E0[];
extern char D_0022A2F0[];

extern void func_0AFDB8(void);
extern void func_12FCE0(void *p);
extern void func_0A88C0(void);
extern void func_0B0370(void);
extern void func_0B0040(void);
extern void func_0B01F8(void);
extern void func_0B2080(int a, int b, float x, float y);
extern void func_0B5290(int a, void *b, void *c, int d);
extern void func_0AE828(unsigned int a, unsigned int b, float f);
extern void func_0B5878(void);
extern void func_0B6D60(void);
extern void func_0B1B50(void);
extern void func_0B1600(void);
extern void func_0B6000(void);
extern void func_0B2188(void);
extern void func_0B5628(void);
extern void func_0B4A88(void);
extern void func_0B2590(void);
extern void func_0B47A0(void);
extern void func_0B2F08(void);
extern void func_0B0D10(void);
extern void func_0A8A20(unsigned int a);
extern void func_0B4FD8(void);
extern void func_0B46D0(void);
extern void func_0A5BE8(int a);
extern void func_0CA818(void);
extern void func_0A8DB8(void);

void func_0AFE50(void)
{
    if (D_00214488) {
        func_0AFDB8();
        func_12FCE0(D_00338420);
        if (D_00214650) {
            func_0A88C0();
        } else {
            if (D_00214790) func_0B0370();
            if (D_00214464) func_0B0040();
            if (D_00214465) func_0B01F8();
            if (D_00214791) {
                D_00214791 = 0;
                func_0B2080(52, 90, 100.0f, 75.0f);
            }
            if (D_00214792) {
                D_00214792 = 0;
                D_00214794 = 120;
            }
            if (D_00214794 != 0) {
                func_0B5290(1, D_0022A2E0, D_0022A2F0, 0);
                D_00214794--;
            }
            if (D_0020F848 != 0xFFFFFFFF) func_0AE828(D_0020F848, 0xFFFFFFFF, 0.0f);
            func_0B5878();
            func_0B6D60();
            func_0B1B50();
            func_0B1600();
            func_0B6000();
            func_0B2188();
            func_0B5628();
            func_0B4A88();
            func_0B2590();
            func_0B47A0();
            func_0B2F08();
            func_0B0D10();
            func_0A8A20(0xFFFFFFFF);
            func_12FCE0(D_00338528);
            func_0B4FD8();
            func_0B46D0();
            func_0A5BE8(0);
            if (D_00219C70) func_0CA818();
            func_0A8DB8();
        }
    }
}
