/* LEVEL_22:0x0A9B00 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

typedef struct {
    int w_00;
    int w_04;
    char pad_08[0xC];
    int w_14;
    char pad_18[5];
    unsigned char b_1D;
} State;

typedef struct {
    char pad_00[0x30];
    float f_30;
    char pad_34[4];
    float f_38;
    char pad_3C[0x200 - 0x3C];
    float v_200[4];
    char pad_210[0x9A0 - 0x210];
    int w_9A0;
} Big;

extern unsigned char D_0015BD85;
extern float D_0015BD8C;
extern float D_0015BD9C;
extern float D_0015BDA0;
extern int D_0015BD88;
extern char D_0015BDB0[];
extern char D_0015BDD8[];
extern State D_0027E5F0;
extern float D_0027E650[4];
extern Big D_00186D40;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_016E40(int a, int b);
extern void func_0A1260(char *p);
extern int func_10B110(void);
extern float func_001170(void);
extern float func_001158(void);
extern void func_0A5458(int a);
extern void func_0A5338(void);
extern void func_0AA980(void);
extern void func_0AACA0(void);
extern void func_022758(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0A9B00(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_0015BD85 = ret;
    if (D_0015BD85 == 0) {
        func_016E40(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_0027E5F0.w_04 = D_0027E5F0.w_00;
    D_0027E5F0.b_1D = 0;
    func_0A1260(D_0015BDB0);
    func_0A1260(D_0015BDD8);
    func_10B110();
    D_0027E5F0.w_14 = flag;
    r = func_001170();
    pf = &D_0015BD8C;
    *pf = r;
    if (r == 0.0f) {
        v = func_001158();
    } else {
        v = r;
    }
    *pf = v;
    D_0015BD9C = D_00186D40.f_30;
    D_0015BDA0 = D_00186D40.f_38;
    Copy4(D_0027E650, D_00186D40.v_200);
    D_0015BD88 = D_00186D40.w_9A0;
    func_0A5458(3);
    func_0A5338();
    func_0AA980();
    func_0AACA0();
    func_022758();
}
