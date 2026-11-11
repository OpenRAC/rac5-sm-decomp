/* LEVEL_04:0x0B5320 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_002152C8;
extern unsigned char D_00215490;
extern unsigned char D_002155D0;
extern unsigned char D_002152A4;
extern unsigned char D_002152A5;
extern unsigned char D_002155D1;
extern unsigned char D_002155D2;
extern int D_002155D4;
extern unsigned int D_00210688;
extern unsigned char D_0021AAB0;
extern char D_00337DA0[];
extern char D_00337EA8[];
extern char D_0022AD60[];
extern char D_0022AD70[];

extern void func_0B5288(void);
extern void func_13DD98(void *p);
extern void func_0ADD90(void);
extern void func_0B5840(void);
extern void func_0B5510(void);
extern void func_0B56C8(void);
extern void func_0B7738(int a, int b, float x, float y);
extern void func_0BAB98(int a, void *b, void *c, int d);
extern void func_0B3CF8(unsigned int a, unsigned int b, float f);
extern void func_0BB298(void);
extern void func_0BC780(void);
extern void func_0B7208(void);
extern void func_0B6A68(void);
extern void func_0BBA20(void);
extern void func_0B7840(void);
extern void func_0BAF30(void);
extern void func_0BA390(void);
extern void func_0B7D18(void);
extern void func_0BA0A8(void);
extern void func_0B87E0(void);
extern void func_0B61E0(void);
extern void func_0ADEF0(unsigned int a);
extern void func_0BA8E0(void);
extern void func_0B9FD8(void);
extern void func_0AB078(int a);
extern void func_0D02C8(void);
extern void func_0AE288(void);

void func_0B5320(void)
{
    if (D_002152C8) {
        func_0B5288();
        func_13DD98(D_00337DA0);
        if (D_00215490) {
            func_0ADD90();
        } else {
            if (D_002155D0) func_0B5840();
            if (D_002152A4) func_0B5510();
            if (D_002152A5) func_0B56C8();
            if (D_002155D1) {
                D_002155D1 = 0;
                func_0B7738(52, 90, 100.0f, 75.0f);
            }
            if (D_002155D2) {
                D_002155D2 = 0;
                D_002155D4 = 120;
            }
            if (D_002155D4 != 0) {
                func_0BAB98(1, D_0022AD60, D_0022AD70, 0);
                D_002155D4--;
            }
            if (D_00210688 != 0xFFFFFFFF) func_0B3CF8(D_00210688, 0xFFFFFFFF, 0.0f);
            func_0BB298();
            func_0BC780();
            func_0B7208();
            func_0B6A68();
            func_0BBA20();
            func_0B7840();
            func_0BAF30();
            func_0BA390();
            func_0B7D18();
            func_0BA0A8();
            func_0B87E0();
            func_0B61E0();
            func_0ADEF0(0xFFFFFFFF);
            func_13DD98(D_00337EA8);
            func_0BA8E0();
            func_0B9FD8();
            func_0AB078(0);
            if (D_0021AAB0) func_0D02C8();
            func_0AE288();
        }
    }
}
