/* LEVEL_05:0x01A330 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_001DE78C;
extern unsigned char D_001DE78D;
extern unsigned char D_001DE78E;
extern int D_001DE790;
extern int D_001DE794;
extern char D_0021B8F8[];
extern char D_00220E40[];

extern void func_08A038(void);
extern void func_02AC50(void);
extern void func_013668(void);
extern void func_01A268(void);
extern void func_01A260(void);
extern int func_019E00(int a);
extern void func_085010(void);
extern char *func_0858A8(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_033670(void);
extern void func_035750(void);
extern void func_034050(void);
extern void func_0962F0(void);
extern void func_091790(float f);
extern void func_08D528(void);
extern void func_01ACC8(void);
extern void func_07B088(float f);
extern void func_02A3B8(void);
extern void func_0ECAD0(void);
extern void func_09DF00(void);
extern void func_07B378(void);
extern void func_09DF80(void);
extern void func_035DD8(float f);
extern void func_0857B0(int a);
extern void func_07AC18(float f);
extern void func_07E210(void);
extern void func_094F28(int a, int b);
extern void func_08D5C0(void);
extern void func_000E40(void);
extern void func_012240(void);
extern void func_09E5C0(float f);
extern void func_09E448(void);
extern void func_017818(void);
extern void func_034070(void);
extern void func_096498(void);
extern void func_0AE368(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01AA88(void);
extern void func_089A90(int a);
extern void func_07BAE0(void);
extern void func_028DD0(void);
extern void func_019DC0(int a, int b);

void func_01A330(void)
{
    D_001DE78C = 1;
    D_001DE78D = 1;
    func_08A038();
    func_02AC50();
    func_013668();
    func_01A268();
    func_01A260();
    if (!func_019E00(6)) {
        func_085010();
    }
    func_0858A8(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_033670();
    func_035750();
    func_034050();
    func_0962F0();
    func_091790(0.033333335f);
    func_08D528();
    func_01ACC8();
    func_07B088(0.033333335f);
    func_02A3B8();
    func_0ECAD0();
    func_09DF00();
    func_07B378();
    func_09DF80();
    func_035DD8(0.033333335f);
    func_0857B0(0);
    func_07AC18(0.033333335f);
    func_07E210();
    func_094F28(0, 0x1D);
    func_08D5C0();
    func_000E40();
    func_012240();
    if (!func_019E00(6)) {
        func_09E5C0(0.033333335f);
        func_09E448();
    }
    func_0857B0(0);
    func_017818();
    func_034070();
    func_096498();
    func_0AE368();
    func_001000(0);
    if (D_001DE78E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0021B8F8, D_0021B8F8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00220E40, func_0011C8());
    }
    func_01AA88();
    func_089A90(-1);
    func_07BAE0();
    func_028DD0();
    if (D_001DE790 == 0 || --D_001DE790 == 0) {
        if (D_001DE794) {
            D_001DE790 = 0;
            func_019DC0(5, 0);
        }
    }
}
