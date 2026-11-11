/* LEVEL_18:0x0187B0 -- placement copy of LEVEL_16_019168.c: runs the per-frame level update sequence. */
extern unsigned char D_0019C314;
extern unsigned char D_0019C315;
extern unsigned char D_0019C316;
extern int D_0019C318;
extern int D_0019C31C;
extern float D_001E09AC;
extern char D_001DEC78[];
extern char D_001E4410[];
extern char D_001E7E00[];
extern void FOG_PreUpdate(void) __asm__("FOG_PreUpdate__Fv");
extern void SND_LevelUpdate(void *a, void *b) __asm__("SND_LevelUpdate__FPC7MATRIX4T0");
extern void SND_Update(void *a, int b, void *c, int d) __asm__("SND_Update__FPC7MATRIX4N30");
extern void func_07D498(void);
extern void func_028F30(void);
extern void func_0130C0(void);
extern void func_0186E8(void);
extern void func_0186E0(void);
extern int func_018220(int);
extern void func_078578(void);
extern char *func_078E10(int);
extern void func_000990(void);
extern void func_0303A8(void);
extern void func_032688(void);
extern void func_030D88(void);
extern void func_089158(void);
extern void func_084C38(float);
extern void func_0809D0(void);
extern void func_0193E8(void);
extern void func_06FFF8(float);
extern void func_028738(void);
extern void func_0D8FB0(void);
extern void func_08DC48(void);
extern void func_0703C0(void);
extern void func_08DCC8(void);
extern void func_032D00(float);
extern void func_078D18(int);
extern void func_017F10(float);
extern void func_06FBB8(float);
extern void func_072D68(void);
extern void func_087D80(int, int);
extern void func_080A68(void);
extern void func_000A20(void);
extern void func_011D00(void);
extern void func_08E2E0(float);
extern void func_08E160(void);
extern void func_015DD0(void);
extern void func_112300(void);
extern void func_030DA8(void);
extern void func_089300(void);
extern int func_09D4B8(void);
extern void func_000BF0(int);
extern int func_000E30(void);
extern void func_0191A8(void);
extern void func_07D098(int);
extern void func_070B78(void);
extern void func_027160(void);
extern void func_0181E0(int, int);

void func_0187B0(void)
{
    float dt;
    int a;
    int b;
    char *m0;
    char *m1;

    D_0019C314 = 1;
    D_0019C315 = 1;
    func_07D498();
    func_028F30();
    func_0130C0();
    func_0186E8();
    func_0186E0();
    dt = D_001E09AC;
    if (!func_018220(6))
        func_078578();
    func_078E10(1);
    FOG_PreUpdate();
    func_000990();
    func_0303A8();
    func_032688();
    func_030D88();
    func_089158();
    func_084C38(dt);
    func_0809D0();
    func_0193E8();
    func_06FFF8(dt);
    func_028738();
    func_0D8FB0();
    func_08DC48();
    func_0703C0();
    func_08DCC8();
    func_032D00(dt);
    func_078D18(0);
    func_017F10(dt);
    func_06FBB8(dt);
    func_072D68();
    func_087D80(0, 0x1D);
    func_080A68();
    func_000A20();
    func_011D00();
    if (!func_018220(6)) {
        func_08E2E0(dt);
        func_08E160();
    }
    func_078D18(0);
    func_015DD0();
    func_112300();
    func_030DA8();
    func_089300();
    func_09D4B8();
    func_000BF0(0);
    if (D_0019C316)
        SND_LevelUpdate(D_001DEC78, D_001DEC78);
    else
        func_000BF0(0);
    m0 = D_001E4410;
    a = func_000E30();
    func_000BF0(1);
    m1 = D_001E7E00;
    b = func_000E30();
    func_000BF0(0);
    SND_Update(m0, a, m1, b);
    func_0191A8();
    func_07D098(-1);
    func_070B78();
    func_027160();
    if (D_0019C318) {
        D_0019C318 = D_0019C318 - 1;
        if (D_0019C318)
            return;
    }
    if (D_0019C31C) {
        D_0019C318 = 0;
        func_0181E0(5, 0);
    }
}
