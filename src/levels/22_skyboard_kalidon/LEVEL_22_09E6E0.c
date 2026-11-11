/* LEVEL_22:0x09E6E0 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_0015B188;
extern unsigned char D_0015B350;
extern unsigned char D_0015B490;
extern unsigned char D_0015B164;
extern unsigned char D_0015B165;
extern unsigned char D_0015B491;
extern unsigned char D_0015B492;
extern int D_0015B494;
extern unsigned int D_00156548;
extern unsigned char D_00160970;
extern char D_00273160[];
extern char D_00273268[];
extern char D_0016E860[];
extern char D_0016E870[];

extern void func_09E648(void);
extern void func_108DE8(void *p);
extern void func_097150(void);
extern void func_09EC00(void);
extern void func_09E8D0(void);
extern void func_09EA88(void);
extern void func_0A0918(int a, int b, float x, float y);
extern void func_0A3A88(int a, void *b, void *c, int d);
extern void func_09D0B8(unsigned int a, unsigned int b, float f);
extern void func_0A4070(void);
extern void func_0A54C8(void);
extern void func_0A03E8(void);
extern void func_09FE98(void);
extern void func_0A4768(void);
extern void func_0A0A20(void);
extern void func_0A3E20(void);
extern void func_0A3298(void);
extern void func_0A0E28(void);
extern void func_0A3038(void);
extern void func_0A17A0(void);
extern void func_09F5A0(void);
extern void func_0972B0(unsigned int a);
extern void func_0A37D0(void);
extern void func_0A2F68(void);
extern void func_094448(int a);
extern void func_0B8F78(void);
extern void func_097648(void);

void func_09E6E0(void)
{
    if (D_0015B188) {
        func_09E648();
        func_108DE8(D_00273160);
        if (D_0015B350) {
            func_097150();
        } else {
            if (D_0015B490) func_09EC00();
            if (D_0015B164) func_09E8D0();
            if (D_0015B165) func_09EA88();
            if (D_0015B491) {
                D_0015B491 = 0;
                func_0A0918(52, 90, 100.0f, 75.0f);
            }
            if (D_0015B492) {
                D_0015B492 = 0;
                D_0015B494 = 120;
            }
            if (D_0015B494 != 0) {
                func_0A3A88(1, D_0016E860, D_0016E870, 0);
                D_0015B494--;
            }
            if (D_00156548 != 0xFFFFFFFF) func_09D0B8(D_00156548, 0xFFFFFFFF, 0.0f);
            func_0A4070();
            func_0A54C8();
            func_0A03E8();
            func_09FE98();
            func_0A4768();
            func_0A0A20();
            func_0A3E20();
            func_0A3298();
            func_0A0E28();
            func_0A3038();
            func_0A17A0();
            func_09F5A0();
            func_0972B0(0xFFFFFFFF);
            func_108DE8(D_00273268);
            func_0A37D0();
            func_0A2F68();
            func_094448(0);
            if (D_00160970) func_0B8F78();
            func_097648();
        }
    }
}
