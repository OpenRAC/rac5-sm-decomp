/* LEVEL_21:0x090998 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_00150A88;
extern unsigned char D_00150C50;
extern unsigned char D_00150D90;
extern unsigned char D_00150A64;
extern unsigned char D_00150A65;
extern unsigned char D_00150D91;
extern unsigned char D_00150D92;
extern int D_00150D94;
extern unsigned int D_0014BE48;
extern unsigned char D_00156270;
extern char D_002355E0[];
extern char D_002356E8[];
extern char D_00165B60[];
extern char D_00165B70[];

extern void func_090900(void);
extern void func_0F07E0(void *p);
extern void func_089408(void);
extern void func_090EB8(void);
extern void func_090B88(void);
extern void func_090D40(void);
extern void func_092B60(int a, int b, float x, float y);
extern void func_095A48(int a, void *b, void *c, int d);
extern void func_08F370(unsigned int a, unsigned int b, float f);
extern void func_096030(void);
extern void func_097488(void);
extern void func_092630(void);
extern void func_0920E0(void);
extern void func_096728(void);
extern void func_092C68(void);
extern void func_095DE0(void);
extern void func_095258(void);
extern void func_093070(void);
extern void func_094FF8(void);
extern void func_0939E8(void);
extern void func_091858(void);
extern void func_089568(unsigned int a);
extern void func_095790(void);
extern void func_094F28(void);
extern void func_086730(int a);
extern void func_0AB078(void);
extern void func_089900(void);

void func_090998(void)
{
    if (D_00150A88) {
        func_090900();
        func_0F07E0(D_002355E0);
        if (D_00150C50) {
            func_089408();
        } else {
            if (D_00150D90) func_090EB8();
            if (D_00150A64) func_090B88();
            if (D_00150A65) func_090D40();
            if (D_00150D91) {
                D_00150D91 = 0;
                func_092B60(52, 90, 100.0f, 75.0f);
            }
            if (D_00150D92) {
                D_00150D92 = 0;
                D_00150D94 = 120;
            }
            if (D_00150D94 != 0) {
                func_095A48(1, D_00165B60, D_00165B70, 0);
                D_00150D94--;
            }
            if (D_0014BE48 != 0xFFFFFFFF) func_08F370(D_0014BE48, 0xFFFFFFFF, 0.0f);
            func_096030();
            func_097488();
            func_092630();
            func_0920E0();
            func_096728();
            func_092C68();
            func_095DE0();
            func_095258();
            func_093070();
            func_094FF8();
            func_0939E8();
            func_091858();
            func_089568(0xFFFFFFFF);
            func_0F07E0(D_002356E8);
            func_095790();
            func_094F28();
            func_086730(0);
            if (D_00156270) func_0AB078();
            func_089900();
        }
    }
}
