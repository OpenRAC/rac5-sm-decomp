/* LEVEL_10:0x01A418 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_001F840C;
extern unsigned char D_001F840D;
extern unsigned char D_001F840E;
extern int D_001F8410;
extern int D_001F8414;
extern char D_00238FF8[];
extern char D_0023E540[];

extern void func_08CCB0(void);
extern void func_02BE20(void);
extern void func_013410(void);
extern void func_01A350(void);
extern void func_01A348(void);
extern int func_019EE8(int a);
extern void func_087A20(void);
extern char *func_0882B8(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000B40(void);
extern void func_0340B8(void);
extern void func_0363F0(void);
extern void func_034A98(void);
extern void func_099158(void);
extern void func_094408(float f);
extern void func_0901A0(void);
extern void func_01ADB0(void);
extern void func_07E018(float f);
extern void func_02B518(void);
extern void func_0F02D0(void);
extern void func_0A0A28(void);
extern void func_07E308(void);
extern void func_0A0AA8(void);
extern void func_036A78(float f);
extern void func_0881C0(int a);
extern void func_07DBA8(float f);
extern void func_0811A0(void);
extern void func_097D90(int a, int b);
extern void func_090238(void);
extern void func_000BD0(void);
extern void func_011FE8(void);
extern void func_0A10E8(float f);
extern void func_0A0F70(void);
extern void func_017810(void);
extern void func_034AB8(void);
extern void func_099300(void);
extern void func_0B0EC0(void);
extern void func_000D90(int a);
extern char *func_000F58(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01AB70(void);
extern void func_08C598(int a);
extern void func_07EA70(void);
extern void func_029F30(void);
extern void func_019EA8(int a, int b);

void func_01A418(void)
{
    D_001F840C = 1;
    D_001F840D = 1;
    func_08CCB0();
    func_02BE20();
    func_013410();
    func_01A350();
    func_01A348();
    if (!func_019EE8(6)) {
        func_087A20();
    }
    func_0882B8(1);
    FOG_PreUpdate__Fv();
    func_000B40();
    func_0340B8();
    func_0363F0();
    func_034A98();
    func_099158();
    func_094408(0.033333335f);
    func_0901A0();
    func_01ADB0();
    func_07E018(0.033333335f);
    func_02B518();
    func_0F02D0();
    func_0A0A28();
    func_07E308();
    func_0A0AA8();
    func_036A78(0.033333335f);
    func_0881C0(0);
    func_07DBA8(0.033333335f);
    func_0811A0();
    func_097D90(0, 0x1D);
    func_090238();
    func_000BD0();
    func_011FE8();
    if (!func_019EE8(6)) {
        func_0A10E8(0.033333335f);
        func_0A0F70();
    }
    func_0881C0(0);
    func_017810();
    func_034AB8();
    func_099300();
    func_0B0EC0();
    func_000D90(0);
    if (D_001F840E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00238FF8, D_00238FF8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0023E540, func_000F58());
    }
    func_01AB70();
    func_08C598(-1);
    func_07EA70();
    func_029F30();
    if (D_001F8410 == 0 || --D_001F8410 == 0) {
        if (D_001F8414) {
            D_001F8410 = 0;
            func_019EA8(5, 0);
        }
    }
}
