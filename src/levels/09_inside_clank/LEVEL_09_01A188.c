/* LEVEL_09:0x01A188 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_001D920C;
extern unsigned char D_001D920D;
extern unsigned char D_001D920E;
extern int D_001D9210;
extern int D_001D9214;
extern char D_00217378[];
extern char D_0021C8C0[];

extern void func_089098(void);
extern void func_02ADF8(void);
extern void func_013668(void);
extern void func_01A0C0(void);
extern void func_01A0B8(void);
extern int func_019C58(int a);
extern void func_084070(void);
extern char *func_084908(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_032168(void);
extern void func_034248(void);
extern void func_032B48(void);
extern void func_095540(void);
extern void func_0907F0(float f);
extern void func_08C588(void);
extern void func_01AB20(void);
extern void func_07A468(float f);
extern void func_02A5A8(void);
extern void func_0EC870(void);
extern void func_09CC00(void);
extern void func_07A758(void);
extern void func_09CC80(void);
extern void func_0348D0(float f);
extern void func_084810(int a);
extern void func_079FF8(float f);
extern void func_07D5F0(void);
extern void func_094178(int a, int b);
extern void func_08C620(void);
extern void func_000E40(void);
extern void func_012240(void);
extern void func_09D2C0(float f);
extern void func_09D148(void);
extern void func_0175B8(void);
extern void func_032B68(void);
extern void func_0956E8(void);
extern void func_0AD058(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01A8E0(void);
extern void func_088AF0(int a);
extern void func_07AEC0(void);
extern void func_028FC0(void);
extern void func_019C18(int a, int b);

void func_01A188(void)
{
    D_001D920C = 1;
    D_001D920D = 1;
    func_089098();
    func_02ADF8();
    func_013668();
    func_01A0C0();
    func_01A0B8();
    if (!func_019C58(6)) {
        func_084070();
    }
    func_084908(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_032168();
    func_034248();
    func_032B48();
    func_095540();
    func_0907F0(0.033333335f);
    func_08C588();
    func_01AB20();
    func_07A468(0.033333335f);
    func_02A5A8();
    func_0EC870();
    func_09CC00();
    func_07A758();
    func_09CC80();
    func_0348D0(0.033333335f);
    func_084810(0);
    func_079FF8(0.033333335f);
    func_07D5F0();
    func_094178(0, 0x1D);
    func_08C620();
    func_000E40();
    func_012240();
    if (!func_019C58(6)) {
        func_09D2C0(0.033333335f);
        func_09D148();
    }
    func_084810(0);
    func_0175B8();
    func_032B68();
    func_0956E8();
    func_0AD058();
    func_001000(0);
    if (D_001D920E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00217378, D_00217378);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0021C8C0, func_0011C8());
    }
    func_01A8E0();
    func_088AF0(-1);
    func_07AEC0();
    func_028FC0();
    if (D_001D9210 == 0 || --D_001D9210 == 0) {
        if (D_001D9214) {
            D_001D9210 = 0;
            func_019C18(5, 0);
        }
    }
}
