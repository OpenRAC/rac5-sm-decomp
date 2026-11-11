/* LEVEL_05:0x0AE690 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_001EB188;
extern unsigned char D_001EB350;
extern unsigned char D_001EB490;
extern unsigned char D_001EB164;
extern unsigned char D_001EB165;
extern unsigned char D_001EB491;
extern unsigned char D_001EB492;
extern int D_001EB494;
extern unsigned int D_001E6548;
extern unsigned char D_001F0970;
extern char D_00309460[];
extern char D_00309568[];
extern char D_002002E0[];
extern char D_002002F0[];

extern void func_0AE5F8(void);
extern void func_12D290(void *p);
extern void func_0A7100(void);
extern void func_0AEBB0(void);
extern void func_0AE880(void);
extern void func_0AEA38(void);
extern void func_0B0858(int a, int b, float x, float y);
extern void func_0B3A50(int a, void *b, void *c, int d);
extern void func_0AD068(unsigned int a, unsigned int b, float f);
extern void func_0B4038(void);
extern void func_0B5520(void);
extern void func_0B0328(void);
extern void func_0AFDD8(void);
extern void func_0B47C0(void);
extern void func_0B0960(void);
extern void func_0B3DE8(void);
extern void func_0B3260(void);
extern void func_0B0D68(void);
extern void func_0B2F78(void);
extern void func_0B16E0(void);
extern void func_0AF550(void);
extern void func_0A7260(unsigned int a);
extern void func_0B3798(void);
extern void func_0B2EA8(void);
extern void func_0A4428(int a);
extern void func_0C8FD8(void);
extern void func_0A75F8(void);

void func_0AE690(void)
{
    if (D_001EB188) {
        func_0AE5F8();
        func_12D290(D_00309460);
        if (D_001EB350) {
            func_0A7100();
        } else {
            if (D_001EB490) func_0AEBB0();
            if (D_001EB164) func_0AE880();
            if (D_001EB165) func_0AEA38();
            if (D_001EB491) {
                D_001EB491 = 0;
                func_0B0858(52, 90, 100.0f, 75.0f);
            }
            if (D_001EB492) {
                D_001EB492 = 0;
                D_001EB494 = 120;
            }
            if (D_001EB494 != 0) {
                func_0B3A50(1, D_002002E0, D_002002F0, 0);
                D_001EB494--;
            }
            if (D_001E6548 != 0xFFFFFFFF) func_0AD068(D_001E6548, 0xFFFFFFFF, 0.0f);
            func_0B4038();
            func_0B5520();
            func_0B0328();
            func_0AFDD8();
            func_0B47C0();
            func_0B0960();
            func_0B3DE8();
            func_0B3260();
            func_0B0D68();
            func_0B2F78();
            func_0B16E0();
            func_0AF550();
            func_0A7260(0xFFFFFFFF);
            func_12D290(D_00309568);
            func_0B3798();
            func_0B2EA8();
            func_0A4428(0);
            if (D_001F0970) func_0C8FD8();
            func_0A75F8();
        }
    }
}
