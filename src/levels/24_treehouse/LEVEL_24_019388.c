/* LEVEL_24:0x019388 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_001C008C;
extern unsigned char D_001C008D;
extern unsigned char D_001C008E;
extern int D_001C0090;
extern int D_001C0094;
extern char D_001FBAF8[];
extern char D_00201040[];

extern void func_085980(void);
extern void func_0294D8(void);
extern void func_013160(void);
extern void func_0192C0(void);
extern void func_0192B8(void);
extern int func_018E58(int a);
extern void func_080958(void);
extern char *func_0811F0(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000BB8(void);
extern void func_02ED00(void);
extern void func_030B38(void);
extern void func_02F6E0(void);
extern void func_091BE8(void);
extern void func_08CE98(float f);
extern void func_088C30(void);
extern void func_019D20(void);
extern void func_0780C8(float f);
extern void func_028C80(void);
extern void func_0E85A0(void);
extern void func_0991C8(void);
extern void func_0783B8(void);
extern void func_099248(void);
extern void func_0311C0(float f);
extern void func_0810F8(int a);
extern void func_077C58(float f);
extern void func_07B250(void);
extern void func_090820(int a, int b);
extern void func_088CC8(void);
extern void func_000C48(void);
extern void func_011EA8(void);
extern void func_099888(float f);
extern void func_099710(void);
extern void func_016DE8(void);
extern void func_02F700(void);
extern void func_091D90(void);
extern void func_0A9620(void);
extern void func_000E08(int a);
extern char *func_000FD0(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_019AE0(void);
extern void func_0853D8(int a);
extern void func_078B20(void);
extern void func_027698(void);
extern void func_018E18(int a, int b);

void func_019388(void)
{
    D_001C008C = 1;
    D_001C008D = 1;
    func_085980();
    func_0294D8();
    func_013160();
    func_0192C0();
    func_0192B8();
    if (!func_018E58(6)) {
        func_080958();
    }
    func_0811F0(1);
    FOG_PreUpdate__Fv();
    func_000BB8();
    func_02ED00();
    func_030B38();
    func_02F6E0();
    func_091BE8();
    func_08CE98(0.033333335f);
    func_088C30();
    func_019D20();
    func_0780C8(0.033333335f);
    func_028C80();
    func_0E85A0();
    func_0991C8();
    func_0783B8();
    func_099248();
    func_0311C0(0.033333335f);
    func_0810F8(0);
    func_077C58(0.033333335f);
    func_07B250();
    func_090820(0, 0x1D);
    func_088CC8();
    func_000C48();
    func_011EA8();
    if (!func_018E58(6)) {
        func_099888(0.033333335f);
        func_099710();
    }
    func_0810F8(0);
    func_016DE8();
    func_02F700();
    func_091D90();
    func_0A9620();
    func_000E08(0);
    if (D_001C008E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_001FBAF8, D_001FBAF8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00201040, func_000FD0());
    }
    func_019AE0();
    func_0853D8(-1);
    func_078B20();
    func_027698();
    if (D_001C0090 == 0 || --D_001C0090 == 0) {
        if (D_001C0094) {
            D_001C0090 = 0;
            func_018E18(5, 0);
        }
    }
}
