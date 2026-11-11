/* LEVEL_02:0x01B6F8 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_0020408C;
extern unsigned char D_0020408D;
extern unsigned char D_0020408E;
extern int D_00204090;
extern int D_00204094;
extern char D_002470F8[];
extern char D_0024C650[];

extern void func_093010(void);
extern void func_02C758(void);
extern void func_013650(void);
extern void func_01B630(void);
extern void func_01B628(void);
extern int func_01B1C8(int a);
extern void func_08DFE8(void);
extern char *func_08E880(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_03A3A8(void);
extern void func_03C488(void);
extern void func_03AD88(void);
extern void func_09F360(void);
extern void func_09A768(float f);
extern void func_096500(void);
extern void func_01C090(void);
extern void func_0842B8(float f);
extern void func_02BF08(void);
extern void func_0F6B40(void);
extern void func_0A6238(void);
extern void func_0845A8(void);
extern void func_0A62B8(void);
extern void func_03CB10(float f);
extern void func_08E788(int a);
extern void func_083E48(float f);
extern void func_087440(void);
extern void func_09DF98(int a, int b);
extern void func_096598(void);
extern void func_000E40(void);
extern void func_012228(void);
extern void func_0A68F8(float f);
extern void func_0A6780(void);
extern void func_018B38(void);
extern void func_03ADA8(void);
extern void func_09F508(void);
extern void func_0B66B8(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01BE50(void);
extern void func_092A68(int a);
extern void func_084D10(void);
extern void func_02A920(void);
extern void func_01B188(int a, int b);

void func_01B6F8(void)
{
    D_0020408C = 1;
    D_0020408D = 1;
    func_093010();
    func_02C758();
    func_013650();
    func_01B630();
    func_01B628();
    if (!func_01B1C8(6)) {
        func_08DFE8();
    }
    func_08E880(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_03A3A8();
    func_03C488();
    func_03AD88();
    func_09F360();
    func_09A768(0.033333335f);
    func_096500();
    func_01C090();
    func_0842B8(0.033333335f);
    func_02BF08();
    func_0F6B40();
    func_0A6238();
    func_0845A8();
    func_0A62B8();
    func_03CB10(0.033333335f);
    func_08E788(0);
    func_083E48(0.033333335f);
    func_087440();
    func_09DF98(0, 0x1D);
    func_096598();
    func_000E40();
    func_012228();
    if (!func_01B1C8(6)) {
        func_0A68F8(0.033333335f);
        func_0A6780();
    }
    func_08E788(0);
    func_018B38();
    func_03ADA8();
    func_09F508();
    func_0B66B8();
    func_001000(0);
    if (D_0020408E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_002470F8, D_002470F8);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0024C650, func_0011C8());
    }
    func_01BE50();
    func_092A68(-1);
    func_084D10();
    func_02A920();
    if (D_00204090 == 0 || --D_00204090 == 0) {
        if (D_00204094) {
            D_00204090 = 0;
            func_01B188(5, 0);
        }
    }
}
