/* LEVEL_03:0x01AB00 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_00207A8C;
extern unsigned char D_00207A8D;
extern unsigned char D_00207A8E;
extern int D_00207A90;
extern int D_00207A94;
extern char D_0024AA78[];
extern char D_0024FFC0[];

extern void func_08C570(void);
extern void func_02BD88(void);
extern void func_013688(void);
extern void func_01AA38(void);
extern void func_01AA30(void);
extern int func_01A5D0(int a);
extern void func_087510(void);
extern char *func_087DA8(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_033BA0(void);
extern void func_035C80(void);
extern void func_034580(void);
extern void func_098A18(void);
extern void func_093CC8(float f);
extern void func_08FA60(void);
extern void func_01B498(void);
extern void func_07D7C8(float f);
extern void func_02B538(void);
extern void func_0EF228(void);
extern void func_09F6D0(void);
extern void func_07DAB8(void);
extern void func_09F750(void);
extern void func_036308(float f);
extern void func_087CB0(int a);
extern void func_07D358(float f);
extern void func_080950(void);
extern void func_097650(int a, int b);
extern void func_08FAF8(void);
extern void func_000E40(void);
extern void func_012260(void);
extern void func_09FD90(float f);
extern void func_09FC18(void);
extern void func_017F58(void);
extern void func_0345A0(void);
extern void func_098BC0(void);
extern void func_0AFB28(void);
extern void func_001000(int a);
extern char *func_0011F0(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01B258(void);
extern void func_08BFC8(int a);
extern void func_07E220(void);
extern void func_029F50(void);
extern void func_01A590(int a, int b);

void func_01AB00(void)
{
    D_00207A8C = 1;
    D_00207A8D = 1;
    func_08C570();
    func_02BD88();
    func_013688();
    func_01AA38();
    func_01AA30();
    if (!func_01A5D0(6)) {
        func_087510();
    }
    func_087DA8(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_033BA0();
    func_035C80();
    func_034580();
    func_098A18();
    func_093CC8(0.033333335f);
    func_08FA60();
    func_01B498();
    func_07D7C8(0.033333335f);
    func_02B538();
    func_0EF228();
    func_09F6D0();
    func_07DAB8();
    func_09F750();
    func_036308(0.033333335f);
    func_087CB0(0);
    func_07D358(0.033333335f);
    func_080950();
    func_097650(0, 0x1D);
    func_08FAF8();
    func_000E40();
    func_012260();
    if (!func_01A5D0(6)) {
        func_09FD90(0.033333335f);
        func_09FC18();
    }
    func_087CB0(0);
    func_017F58();
    func_0345A0();
    func_098BC0();
    func_0AFB28();
    func_001000(0);
    if (D_00207A8E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0024AA78, D_0024AA78);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0024FFC0, func_0011F0());
    }
    func_01B258();
    func_08BFC8(-1);
    func_07E220();
    func_029F50();
    if (D_00207A90 == 0 || --D_00207A90 == 0) {
        if (D_00207A94) {
            D_00207A90 = 0;
            func_01A590(5, 0);
        }
    }
}
