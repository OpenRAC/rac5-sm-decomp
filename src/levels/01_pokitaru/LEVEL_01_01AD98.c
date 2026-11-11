/* LEVEL_01:0x01AD98 -- runs one frame of the level update sequence. */
extern unsigned char D_001EF40C;
extern unsigned char D_001EF40D;
extern unsigned char D_001EF40E;
extern int D_001EF410;
extern int D_001EF414;
extern char D_0022FBF8[];
extern char D_00235140[];

extern void func_08C940(void);
extern void func_02BF98(void);
extern void func_013668(void);
extern void func_01ACD0(void);
extern void func_01ACC8(void);
extern int func_01A868(int a);
extern void func_0876B8(void);
extern char *func_087F50(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_035960(void);
extern void func_037A40(void);
extern void func_036340(void);
extern void func_098C90(void);
extern void func_094098(float f);
extern void func_08FE30(void);
extern void func_01B730(void);
extern void func_07D9E8(float f);
extern void func_02B740(void);
extern void func_0F0990(void);
extern void func_09F948(void);
extern void func_07DCD8(void);
extern void func_09F9C8(void);
extern void func_0380C8(float f);
extern void func_087E58(int a);
extern void func_07D578(float f);
extern void func_080B70(void);
extern void func_0978C8(int a, int b);
extern void func_08FEC8(void);
extern void func_000E40(void);
extern void func_012240(void);
extern void func_0A0008(float f);
extern void func_09FE90(void);
extern void func_0181A8(void);
extern void func_036360(void);
extern void func_098E38(void);
extern void func_0AFDA8(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01B4F0(void);
extern void func_08C1C0(int a);
extern void func_07E440(void);
extern void func_02A158(void);
extern void func_01A828(int a, int b);

void func_01AD98(void)
{
    D_001EF40C = 1;
    D_001EF40D = 1;
    func_08C940();
    func_02BF98();
    func_013668();
    func_01ACD0();
    func_01ACC8();
    if (!func_01A868(6)) {
        func_0876B8();
    }
    func_087F50(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_035960();
    func_037A40();
    func_036340();
    func_098C90();
    func_094098(0.033333335f);
    func_08FE30();
    func_01B730();
    func_07D9E8(0.033333335f);
    func_02B740();
    func_0F0990();
    func_09F948();
    func_07DCD8();
    func_09F9C8();
    func_0380C8(0.033333335f);
    func_087E58(0);
    func_07D578(0.033333335f);
    func_080B70();
    func_0978C8(0, 0x1D);
    func_08FEC8();
    func_000E40();
    func_012240();
    if (!func_01A868(6)) {
        func_0A0008(0.033333335f);
        func_09FE90();
    }
    func_087E58(0);
    func_0181A8();
    func_036360();
    func_098E38();
    func_0AFDA8();
    func_001000(0);
    if (D_001EF40E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0022FBF8, D_0022FBF8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_00235140, func_0011C8());
    }
    func_01B4F0();
    func_08C1C0(-1);
    func_07E440();
    func_02A158();
    if (D_001EF410 == 0 || --D_001EF410 == 0) {
        if (D_001EF414) {
            D_001EF410 = 0;
            func_01A828(5, 0);
        }
    }
}
