/* LEVEL_08:0x01B710 -- placement copy of LEVEL_01_01AD98.c: runs one frame of the level update sequence. */
extern unsigned char D_00237F8C;
extern unsigned char D_00237F8D;
extern unsigned char D_00237F8E;
extern int D_00237F90;
extern int D_00237F94;
extern char D_0027EE78[];
extern char D_002843D0[];

extern void func_094860(void);
extern void func_02C710(void);
extern void func_0136D0(void);
extern void func_01B648(void);
extern void func_01B640(void);
extern int func_01B1E0(int a);
extern void func_08F708(void);
extern char *func_08FFA0(int a);
extern void FOG_PreUpdate__Fv(void);
extern void func_000DB0(void);
extern void func_03A7D8(void);
extern void func_03CB10(void);
extern void func_03B1B8(void);
extern void func_0A0D30(void);
extern void func_09BFB8(float f);
extern void func_097D50(void);
extern void func_01C0A8(void);
extern void func_085958(float f);
extern void func_02BEB8(void);
extern void func_0FC3D8(void);
extern void func_0AA248(void);
extern void func_085C48(void);
extern void func_0AA2C8(void);
extern void func_03D198(float f);
extern void func_08FEA8(int a);
extern void func_0854E8(float f);
extern void func_088AE0(void);
extern void func_09F968(int a, int b);
extern void func_097DE8(void);
extern void func_000E40(void);
extern void func_0122A8(void);
extern void func_0AA908(float f);
extern void func_0AA790(void);
extern void func_018A98(void);
extern void func_03B1D8(void);
extern void func_0A0ED8(void);
extern void func_0BA6E0(void);
extern void func_001000(int a);
extern char *func_0011C8(void);
extern void SND_LevelUpdate__FPC7MATRIX4T0(char *a, char *b);
extern void func_01BE68(void);
extern void func_0942B8(int a);
extern void func_0863B0(void);
extern void func_02A6D0(void);
extern void func_01B1A0(int a, int b);

void func_01B710(void)
{
    D_00237F8C = 1;
    D_00237F8D = 1;
    func_094860();
    func_02C710();
    func_0136D0();
    func_01B648();
    func_01B640();
    if (!func_01B1E0(6)) {
        func_08F708();
    }
    func_08FFA0(1);
    FOG_PreUpdate__Fv();
    func_000DB0();
    func_03A7D8();
    func_03CB10();
    func_03B1B8();
    func_0A0D30();
    func_09BFB8(0.033333335f);
    func_097D50();
    func_01C0A8();
    func_085958(0.033333335f);
    func_02BEB8();
    func_0FC3D8();
    func_0AA248();
    func_085C48();
    func_0AA2C8();
    func_03D198(0.033333335f);
    func_08FEA8(0);
    func_0854E8(0.033333335f);
    func_088AE0();
    func_09F968(0, 0x1D);
    func_097DE8();
    func_000E40();
    func_0122A8();
    if (!func_01B1E0(6)) {
        func_0AA908(0.033333335f);
        func_0AA790();
    }
    func_08FEA8(0);
    func_018A98();
    func_03B1D8();
    func_0A0ED8();
    func_0BA6E0();
    func_001000(0);
    if (D_00237F8E) {
        SND_LevelUpdate__FPC7MATRIX4T0(D_0027EE78, D_0027EE78);
    } else {
        SND_LevelUpdate__FPC7MATRIX4T0(D_002843D0, func_0011C8());
    }
    func_01BE68();
    func_0942B8(-1);
    func_0863B0();
    func_02A6D0();
    if (D_00237F90 == 0 || --D_00237F90 == 0) {
        if (D_00237F94) {
            D_00237F90 = 0;
            func_01B1A0(5, 0);
        }
    }
}
