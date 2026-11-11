/* LEVEL_06:0x019598 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_001DE30C;
extern unsigned char D_001DE30D;
extern unsigned char D_001DE30E;
extern int D_001DE310;
extern int D_001DE314;
extern char D_0021C978[];
extern char D_00221EC0[];

extern void func_085590(void);
extern void func_02A378(void);
extern void func_0134E0(void);
extern void func_0194D0(void);
extern void func_0194C8(void);
extern int func_019068(int a);
extern void func_080530(void);
extern char *func_080DC8(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_0323B0(void);
extern void func_034490(void);
extern void func_032D90(void);
extern void func_0919A0(void);
extern void func_08CCE8(float f);
extern void func_088A80(void);
extern void func_019F30(void);
extern void func_0775C8(float f);
extern void func_029B28(void);
extern void func_0E9A50(void);
extern void func_09A120(void);
extern void func_0778B8(void);
extern void func_09A1A0(void);
extern void func_034B18(float f);
extern void func_080CD0(int a);
extern void func_077158(float f);
extern void func_07A750(void);
extern void func_0905D8(int a, int b);
extern void func_088B18(void);
extern void func_000E40(void);
extern void func_012228(void);
extern void func_09A7E0(float f);
extern void func_09A668(void);
extern void func_0169F8(void);
extern void func_032DB0(void);
extern void func_091B48(void);
extern void func_0AA578(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_019CF0(void);
extern void func_084FE8(int a);
extern void func_078020(void);
extern void func_028540(void);
extern void func_019028(int a, int b);

void func_019598(void)
{
    D_001DE30C = 1;
    D_001DE30D = 1;
    func_085590();
    func_02A378();
    func_0134E0();
    func_0194D0();
    func_0194C8();
    if (!func_019068(6)) {
        func_080530();
    }
    func_080DC8(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_0323B0();
    func_034490();
    func_032D90();
    func_0919A0();
    func_08CCE8(0.033333335f);
    func_088A80();
    func_019F30();
    func_0775C8(0.033333335f);
    func_029B28();
    func_0E9A50();
    func_09A120();
    func_0778B8();
    func_09A1A0();
    func_034B18(0.033333335f);
    func_080CD0(0);
    func_077158(0.033333335f);
    func_07A750();
    func_0905D8(0, 0x1D);
    func_088B18();
    func_000E40();
    func_012228();
    if (!func_019068(6)) {
        func_09A7E0(0.033333335f);
        func_09A668();
    }
    func_080CD0(0);
    func_0169F8();
    func_032DB0();
    func_091B48();
    func_0AA578();
    func_001000(0);
    if (D_001DE30E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0021C978, D_0021C978);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00221EC0, func_0011C8());
    }
    func_019CF0();
    func_084FE8(-1);
    func_078020();
    func_028540();
    if (D_001DE310 == 0 || --D_001DE310 == 0) {
        if (D_001DE314) {
            D_001DE310 = 0;
            func_019028(5, 0);
        }
    }
}
