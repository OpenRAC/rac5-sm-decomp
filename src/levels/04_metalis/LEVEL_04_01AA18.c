/* LEVEL_04:0x01AA18 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_0020858C;
extern unsigned char D_0020858D;
extern unsigned char D_0020858E;
extern int D_00208590;
extern int D_00208594;
extern char D_0024A3F8[];
extern char D_0024F950[];

extern void func_08FA38(void);
extern void func_02BC38(void);
extern void func_013480(void);
extern void func_01A950(void);
extern void func_01A948(void);
extern int func_01A4E8(int a);
extern void func_08A950(void);
extern char *func_08B1E8(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000BB8(void);
extern void func_036FA8(void);
extern void func_039088(void);
extern void func_037988(void);
extern void func_09BD98(void);
extern void func_097190(float f);
extern void func_092F28(void);
extern void func_01B3B0(void);
extern void func_080E48(float f);
extern void func_02B3E8(void);
extern void func_0F7EC8(void);
extern void func_0A4B60(void);
extern void func_081138(void);
extern void func_0A4BE0(void);
extern void func_039710(float f);
extern void func_08B0F0(int a);
extern void func_0809D8(float f);
extern void func_083FD0(void);
extern void func_09A9D0(int a, int b);
extern void func_092FC0(void);
extern void func_000C48(void);
extern void func_012058(void);
extern void func_0A5220(float f);
extern void func_0A50A8(void);
extern void func_017E40(void);
extern void func_0379A8(void);
extern void func_09BF40(void);
extern void func_0B4FF8(void);
extern void func_000E08(int a);
extern char *func_000FD0(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01B170(void);
extern void func_08F490(int a);
extern void func_0818A0(void);
extern void func_029C00(void);
extern void func_01A4A8(int a, int b);

void func_01AA18(void)
{
    D_0020858C = 1;
    D_0020858D = 1;
    func_08FA38();
    func_02BC38();
    func_013480();
    func_01A950();
    func_01A948();
    if (!func_01A4E8(6)) {
        func_08A950();
    }
    func_08B1E8(1);
    FOG_PreUpdate__Fv();
    func_000BB8();
    func_036FA8();
    func_039088();
    func_037988();
    func_09BD98();
    func_097190(0.033333335f);
    func_092F28();
    func_01B3B0();
    func_080E48(0.033333335f);
    func_02B3E8();
    func_0F7EC8();
    func_0A4B60();
    func_081138();
    func_0A4BE0();
    func_039710(0.033333335f);
    func_08B0F0(0);
    func_0809D8(0.033333335f);
    func_083FD0();
    func_09A9D0(0, 0x1D);
    func_092FC0();
    func_000C48();
    func_012058();
    if (!func_01A4E8(6)) {
        func_0A5220(0.033333335f);
        func_0A50A8();
    }
    func_08B0F0(0);
    func_017E40();
    func_0379A8();
    func_09BF40();
    func_0B4FF8();
    func_000E08(0);
    if (D_0020858E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0024A3F8, D_0024A3F8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0024F950, func_000FD0());
    }
    func_01B170();
    func_08F490(-1);
    func_0818A0();
    func_029C00();
    if (D_00208590 == 0 || --D_00208590 == 0) {
        if (D_00208594) {
            D_00208590 = 0;
            func_01A4A8(5, 0);
        }
    }
}
