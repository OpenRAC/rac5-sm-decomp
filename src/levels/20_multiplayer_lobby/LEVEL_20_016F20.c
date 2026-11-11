/* LEVEL_20:0x016F20 -- placement copy of LEVEL_16_019168.c: runs the per-frame level update sequence. */
extern unsigned char D_000FD57C;
extern unsigned char D_000FD57D;
extern unsigned char D_000FD57E;
extern int D_000FD580;
extern int D_000FD584;
extern float D_00137FAC;
extern char D_00136278[];
extern char D_0013BA10[];
extern char D_0013F400[];
extern void FOG_PreUpdate(void) __asm__("FOG_PreUpdate__Fv");
extern void SND_LevelUpdate(void *a, void *b) __asm__("SND_LevelUpdate__FPC7MATRIX4T0");
extern void SND_Update(void *a, int b, void *c, int d) __asm__("SND_Update__FPC7MATRIX4N30");
extern void func_06B788(void);
extern void func_026488(void);
extern void func_012910(void);
extern void func_016E58(void);
extern void func_016E50(void);
extern int func_016990(int);
extern void func_066868(void);
extern char *func_067100(int);
extern void func_000978(void);
extern void func_02C168(void);
extern void func_02E1A0(void);
extern void func_02CB48(void);
extern void func_076FB0(void);
extern void func_072B28(float);
extern void func_06E9D0(void);
extern void func_017B58(void);
extern void func_05F938(float);
extern void func_025C90(void);
extern void func_0BBCA8(void);
extern void func_079538(void);
extern void func_05FD00(void);
extern void func_0795B8(void);
extern void func_02E818(float);
extern void func_067008(int);
extern void func_016680(float);
extern void func_05F4F8(float);
extern void func_062678(void);
extern void func_075BD8(int, int);
extern void func_06EA68(void);
extern void func_000A08(void);
extern void func_011C00(void);
extern void func_079BD0(float);
extern void func_079A50(void);
extern void func_014670(void);
extern void func_0E60B8(void);
extern void func_02CB68(void);
extern void func_077158(void);
extern int func_088BA0(void);
extern void func_000BD8(int);
extern int func_000D80(void);
extern void func_017918(void);
extern void func_06B388(int);
extern void func_0604B8(void);
extern void func_0246B8(void);
extern void func_016950(int, int);

void func_016F20(void)
{
    float dt;
    int a;
    int b;
    char *m0;
    char *m1;

    D_000FD57C = 1;
    D_000FD57D = 1;
    func_06B788();
    func_026488();
    func_012910();
    func_016E58();
    func_016E50();
    dt = D_00137FAC;
    if (!func_016990(6))
        func_066868();
    func_067100(1);
    FOG_PreUpdate();
    func_000978();
    func_02C168();
    func_02E1A0();
    func_02CB48();
    func_076FB0();
    func_072B28(dt);
    func_06E9D0();
    func_017B58();
    func_05F938(dt);
    func_025C90();
    func_0BBCA8();
    func_079538();
    func_05FD00();
    func_0795B8();
    func_02E818(dt);
    func_067008(0);
    func_016680(dt);
    func_05F4F8(dt);
    func_062678();
    func_075BD8(0, 0x1D);
    func_06EA68();
    func_000A08();
    func_011C00();
    if (!func_016990(6)) {
        func_079BD0(dt);
        func_079A50();
    }
    func_067008(0);
    func_014670();
    func_0E60B8();
    func_02CB68();
    func_077158();
    func_088BA0();
    func_000BD8(0);
    if (D_000FD57E)
        SND_LevelUpdate(D_00136278, D_00136278);
    else
        func_000BD8(0);
    m0 = D_0013BA10;
    a = func_000D80();
    func_000BD8(1);
    m1 = D_0013F400;
    b = func_000D80();
    func_000BD8(0);
    SND_Update(m0, a, m1, b);
    func_017918();
    func_06B388(-1);
    func_0604B8();
    func_0246B8();
    if (D_000FD580) {
        D_000FD580 = D_000FD580 - 1;
        if (D_000FD580)
            return;
    }
    if (D_000FD584) {
        D_000FD580 = 0;
        func_016950(5, 0);
    }
}
