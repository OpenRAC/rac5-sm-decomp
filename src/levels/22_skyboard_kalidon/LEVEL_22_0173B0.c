/* LEVEL_22:0x0173B0 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_0014E78C;
extern unsigned char D_0014E78D;
extern unsigned char D_0014E78E;
extern int D_0014E790;
extern int D_0014E794;
extern char D_001817F8[];
extern char D_00186D40[];

extern void func_07D950(void);
extern void func_026528(void);
extern void func_012DB0(void);
extern void func_0172E8(void);
extern void func_0172E0(void);
extern int func_016E80(int a);
extern void func_078AD0(void);
extern char *func_079368(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000BB8(void);
extern void func_02BB58(void);
extern void func_02D990(void);
extern void func_02C538(void);
extern void func_089950(void);
extern void func_084E68(float f);
extern void func_080C00(void);
extern void func_017D48(void);
extern void func_0703C0(float f);
extern void func_025CD8(void);
extern void func_0D5DA0(void);
extern void func_08DFF8(void);
extern void func_0706B0(void);
extern void func_08E078(void);
extern void func_02E018(float f);
extern void func_079270(int a);
extern void func_06FF50(float f);
extern void func_073548(void);
extern void func_088588(int a, int b);
extern void func_080C98(void);
extern void func_000C48(void);
extern void func_011DD0(void);
extern void func_08E688(float f);
extern void func_08E510(void);
extern void func_014E68(void);
extern void func_02C558(void);
extern void func_089AF8(void);
extern void func_09E3B8(void);
extern void func_000E08(int a);
extern char *func_000F38(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_017B08(void);
extern void func_07D550(int a);
extern void func_070E18(void);
extern void func_0246F0(void);
extern void func_016E40(int a, int b);

void func_0173B0(void)
{
    D_0014E78C = 1;
    D_0014E78D = 1;
    func_07D950();
    func_026528();
    func_012DB0();
    func_0172E8();
    func_0172E0();
    if (!func_016E80(6)) {
        func_078AD0();
    }
    func_079368(1);
    FOG_PreUpdate__Fv();
    func_000BB8();
    func_02BB58();
    func_02D990();
    func_02C538();
    func_089950();
    func_084E68(0.033333335f);
    func_080C00();
    func_017D48();
    func_0703C0(0.033333335f);
    func_025CD8();
    func_0D5DA0();
    func_08DFF8();
    func_0706B0();
    func_08E078();
    func_02E018(0.033333335f);
    func_079270(0);
    func_06FF50(0.033333335f);
    func_073548();
    func_088588(0, 0x1D);
    func_080C98();
    func_000C48();
    func_011DD0();
    if (!func_016E80(6)) {
        func_08E688(0.033333335f);
        func_08E510();
    }
    func_079270(0);
    func_014E68();
    func_02C558();
    func_089AF8();
    func_09E3B8();
    func_000E08(0);
    if (D_0014E78E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_001817F8, D_001817F8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00186D40, func_000F38());
    }
    func_017B08();
    func_07D550(-1);
    func_070E18();
    func_0246F0();
    if (D_0014E790 == 0 || --D_0014E790 == 0) {
        if (D_0014E794) {
            D_0014E790 = 0;
            func_016E40(5, 0);
        }
    }
}
