/* LEVEL_23:0x0198A8 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_001C280C;
extern unsigned char D_001C280D;
extern unsigned char D_001C280E;
extern int D_001C2810;
extern int D_001C2814;
extern char D_001FD078[];
extern char D_002025C0[];

extern void func_0825A0(void);
extern void func_029B08(void);
extern void func_0134F0(void);
extern void func_0197E0(void);
extern void func_0197D8(void);
extern int func_019378(int a);
extern void func_07D578(void);
extern char *func_07DE10(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_02F138(void);
extern void func_030F70(void);
extern void func_02FB18(void);
extern void func_08E618(void);
extern void func_089AB8(float f);
extern void func_085850(void);
extern void func_01A240(void);
extern void func_074DE8(float f);
extern void func_0292B0(void);
extern void func_0E3878(void);
extern void func_096690(void);
extern void func_0750D8(void);
extern void func_096710(void);
extern void func_0315F8(float f);
extern void func_07DD18(int a);
extern void func_074978(float f);
extern void func_077F70(void);
extern void func_08D250(int a, int b);
extern void func_0858E8(void);
extern void func_000E40(void);
extern void func_012238(void);
extern void func_096D50(float f);
extern void func_096BD8(void);
extern void func_016FB0(void);
extern void func_02FB38(void);
extern void func_08E7C0(void);
extern void func_0A6B18(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01A000(void);
extern void func_081FF8(int a);
extern void func_075840(void);
extern void func_027CC8(void);
extern void func_019338(int a, int b);

void func_0198A8(void)
{
    D_001C280C = 1;
    D_001C280D = 1;
    func_0825A0();
    func_029B08();
    func_0134F0();
    func_0197E0();
    func_0197D8();
    if (!func_019378(6)) {
        func_07D578();
    }
    func_07DE10(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_02F138();
    func_030F70();
    func_02FB18();
    func_08E618();
    func_089AB8(0.033333335f);
    func_085850();
    func_01A240();
    func_074DE8(0.033333335f);
    func_0292B0();
    func_0E3878();
    func_096690();
    func_0750D8();
    func_096710();
    func_0315F8(0.033333335f);
    func_07DD18(0);
    func_074978(0.033333335f);
    func_077F70();
    func_08D250(0, 0x1D);
    func_0858E8();
    func_000E40();
    func_012238();
    if (!func_019378(6)) {
        func_096D50(0.033333335f);
        func_096BD8();
    }
    func_07DD18(0);
    func_016FB0();
    func_02FB38();
    func_08E7C0();
    func_0A6B18();
    func_001000(0);
    if (D_001C280E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_001FD078, D_001FD078);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_002025C0, func_0011C8());
    }
    func_01A000();
    func_081FF8(-1);
    func_075840();
    func_027CC8();
    if (D_001C2810 == 0 || --D_001C2810 == 0) {
        if (D_001C2814) {
            D_001C2810 = 0;
            func_019338(5, 0);
        }
    }
}
