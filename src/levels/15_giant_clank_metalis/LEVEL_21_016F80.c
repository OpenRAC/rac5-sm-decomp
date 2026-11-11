/* LEVEL_21:0x016F80 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_00144074;
extern unsigned char D_00144075;
extern unsigned char D_00144076;
extern int D_00144078;
extern int D_0014407C;
extern char D_00177D78[];
extern char D_0017D2C0[];

extern void func_070C00(void);
extern void func_025708(void);
extern void func_012B98(void);
extern void func_016EB8(void);
extern void func_016EB0(void);
extern int func_016A50(int a);
extern void func_06BD98(void);
extern char *func_06C630(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000908(void);
extern void func_02B340(void);
extern void func_02D178(void);
extern void func_02BD20(void);
extern void func_07CC28(void);
extern void func_077F58(float f);
extern void func_073E00(void);
extern void func_017918(void);
extern void func_062690(float f);
extern void func_024EB8(void);
extern void func_0C3750(void);
extern void func_0802B8(void);
extern void func_062980(void);
extern void func_080338(void);
extern void func_02D800(float f);
extern void func_06C538(int a);
extern void func_062220(float f);
extern void func_065620(void);
extern void func_07B860(int a, int b);
extern void func_073E98(void);
extern void func_000998(void);
extern void func_011C00(void);
extern void func_080948(float f);
extern void func_0807D0(void);
extern void func_014A40(void);
extern void func_02BD40(void);
extern void func_07CDD0(void);
extern void func_090670(void);
extern void func_000B58(int a);
extern char *func_000CB0(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_0176D8(void);
extern void func_0707E8(int a);
extern void func_0630E8(void);
extern void func_023930(void);
extern void func_016A10(int a, int b);

void func_016F80(void)
{
    D_00144074 = 1;
    D_00144075 = 1;
    func_070C00();
    func_025708();
    func_012B98();
    func_016EB8();
    func_016EB0();
    if (!func_016A50(6)) {
        func_06BD98();
    }
    func_06C630(1);
    FOG_PreUpdate__Fv();
    func_000908();
    func_02B340();
    func_02D178();
    func_02BD20();
    func_07CC28();
    func_077F58(0.033333335f);
    func_073E00();
    func_017918();
    func_062690(0.033333335f);
    func_024EB8();
    func_0C3750();
    func_0802B8();
    func_062980();
    func_080338();
    func_02D800(0.033333335f);
    func_06C538(0);
    func_062220(0.033333335f);
    func_065620();
    func_07B860(0, 0x1D);
    func_073E98();
    func_000998();
    func_011C00();
    if (!func_016A50(6)) {
        func_080948(0.033333335f);
        func_0807D0();
    }
    func_06C538(0);
    func_014A40();
    func_02BD40();
    func_07CDD0();
    func_090670();
    func_000B58(0);
    if (D_00144076) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00177D78, D_00177D78);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0017D2C0, func_000CB0());
    }
    func_0176D8();
    func_0707E8(-1);
    func_0630E8();
    func_023930();
    if (D_00144078 == 0 || --D_00144078 == 0) {
        if (D_0014407C) {
            D_00144078 = 0;
            func_016A10(5, 0);
        }
    }
}
