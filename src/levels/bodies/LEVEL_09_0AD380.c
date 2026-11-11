/* LEVEL_09:0x0AD380 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_001E5C08;
extern unsigned char D_001E5DD0;
extern unsigned char D_001E5F10;
extern unsigned char D_001E5BE4;
extern unsigned char D_001E5BE5;
extern unsigned char D_001E5F11;
extern unsigned char D_001E5F12;
extern int D_001E5F14;
extern unsigned int D_001E0FC8;
extern unsigned char D_001EB3F0;
extern char D_00304D20[];
extern char D_00304E28[];
extern char D_001FAFE0[];
extern char D_001FAFF0[];

extern void func_0AD2E8(void);
extern void func_12A8B0(void *p);
extern void func_0A5DF0(void);
extern void func_0AD8A0(void);
extern void func_0AD570(void);
extern void func_0AD728(void);
extern void func_0AF548(int a, int b, float x, float y);
extern void func_0B2758(int a, void *b, void *c, int d);
extern void func_0ABD58(unsigned int a, unsigned int b, float f);
extern void func_0B2D40(void);
extern void func_0B4228(void);
extern void func_0AF018(void);
extern void func_0AEAC8(void);
extern void func_0B34C8(void);
extern void func_0AF650(void);
extern void func_0B2AF0(void);
extern void func_0B1F50(void);
extern void func_0AFA58(void);
extern void func_0B1C68(void);
extern void func_0B03D0(void);
extern void func_0AE240(void);
extern void func_0A5F50(unsigned int a);
extern void func_0B24A0(void);
extern void func_0B1B98(void);
extern void func_0A3118(int a);
extern void func_0C7CE0(void);
extern void func_0A62E8(void);

void func_0AD380(void)
{
    if (D_001E5C08) {
        func_0AD2E8();
        func_12A8B0(D_00304D20);
        if (D_001E5DD0) {
            func_0A5DF0();
        } else {
            if (D_001E5F10) func_0AD8A0();
            if (D_001E5BE4) func_0AD570();
            if (D_001E5BE5) func_0AD728();
            if (D_001E5F11) {
                D_001E5F11 = 0;
                func_0AF548(52, 90, 100.0f, 75.0f);
            }
            if (D_001E5F12) {
                D_001E5F12 = 0;
                D_001E5F14 = 120;
            }
            if (D_001E5F14 != 0) {
                func_0B2758(1, D_001FAFE0, D_001FAFF0, 0);
                D_001E5F14--;
            }
            if (D_001E0FC8 != 0xFFFFFFFF) func_0ABD58(D_001E0FC8, 0xFFFFFFFF, 0.0f);
            func_0B2D40();
            func_0B4228();
            func_0AF018();
            func_0AEAC8();
            func_0B34C8();
            func_0AF650();
            func_0B2AF0();
            func_0B1F50();
            func_0AFA58();
            func_0B1C68();
            func_0B03D0();
            func_0AE240();
            func_0A5F50(0xFFFFFFFF);
            func_12A8B0(D_00304E28);
            func_0B24A0();
            func_0B1B98();
            func_0A3118(0);
            if (D_001EB3F0) func_0C7CE0();
            func_0A62E8();
        }
    }
}
