/* LEVEL_07:0x01B458 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_0020370C;
extern unsigned char D_0020370D;
extern unsigned char D_0020370E;
extern int D_00203710;
extern int D_00203714;
extern char D_002454F8[];
extern char D_0024AA40[];

extern void func_08E7C8(void);
extern void func_02C2D0(void);
extern void func_013668(void);
extern void func_01B390(void);
extern void func_01B388(void);
extern int func_01AF28(int a);
extern void func_089788(void);
extern char *func_08A020(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_035E90(void);
extern void func_037F70(void);
extern void func_036870(void);
extern void func_09AC70(void);
extern void func_095F20(float f);
extern void func_091CB8(void);
extern void func_01BDF0(void);
extern void func_07FB50(float f);
extern void func_02BA80(void);
extern void func_0F1790(void);
extern void func_0A1928(void);
extern void func_07FE40(void);
extern void func_0A19A8(void);
extern void func_0385F8(float f);
extern void func_089F28(int a);
extern void func_07F6E0(float f);
extern void func_082CD8(void);
extern void func_0998A8(int a, int b);
extern void func_091D50(void);
extern void func_000E40(void);
extern void func_012240(void);
extern void func_0A1FE8(float f);
extern void func_0A1E70(void);
extern void func_0188B8(void);
extern void func_036890(void);
extern void func_09AE18(void);
extern void func_0B1DA8(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01BBB0(void);
extern void func_08E220(int a);
extern void func_0805A8(void);
extern void func_02A498(void);
extern void func_01AEE8(int a, int b);

void func_01B458(void)
{
    D_0020370C = 1;
    D_0020370D = 1;
    func_08E7C8();
    func_02C2D0();
    func_013668();
    func_01B390();
    func_01B388();
    if (!func_01AF28(6)) {
        func_089788();
    }
    func_08A020(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_035E90();
    func_037F70();
    func_036870();
    func_09AC70();
    func_095F20(0.033333335f);
    func_091CB8();
    func_01BDF0();
    func_07FB50(0.033333335f);
    func_02BA80();
    func_0F1790();
    func_0A1928();
    func_07FE40();
    func_0A19A8();
    func_0385F8(0.033333335f);
    func_089F28(0);
    func_07F6E0(0.033333335f);
    func_082CD8();
    func_0998A8(0, 0x1D);
    func_091D50();
    func_000E40();
    func_012240();
    if (!func_01AF28(6)) {
        func_0A1FE8(0.033333335f);
        func_0A1E70();
    }
    func_089F28(0);
    func_0188B8();
    func_036890();
    func_09AE18();
    func_0B1DA8();
    func_001000(0);
    if (D_0020370E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_002454F8, D_002454F8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0024AA40, func_0011C8());
    }
    func_01BBB0();
    func_08E220(-1);
    func_0805A8();
    func_02A498();
    if (D_00203710 == 0 || --D_00203710 == 0) {
        if (D_00203714) {
            D_00203710 = 0;
            func_01AEE8(5, 0);
        }
    }
}
