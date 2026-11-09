/* LEVEL_10:0x0BC9A0 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_00205A05;
extern float D_00205A0C;
extern float D_00205A1C;
extern float D_00205A20;
extern int D_00205A08;
extern char D_00205A30[];
extern char D_00205A58[];
extern State D_00331E30;
extern float D_00331E90[4];
extern Big D_0023E540;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_019EA8(int a, int b);
extern void func_0B3DB8(char *p);
extern int func_131AC0(void);
extern float func_001190(void);
extern float func_001178(void);
extern void func_0B8188(int a);
extern void func_0B8068(void);
extern void func_0BD820(void);
extern void func_0BDB40(void);
extern void func_0276A8(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0BC9A0(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_00205A05 = ret;
    if (D_00205A05 == 0) {
        func_019EA8(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_00331E30.w_04 = D_00331E30.w_00;
    D_00331E30.b_1D = 0;
    func_0B3DB8(D_00205A30);
    func_0B3DB8(D_00205A58);
    func_131AC0();
    D_00331E30.w_14 = flag;
    r = func_001190();
    pf = &D_00205A0C;
    *pf = r;
    if (r == 0.0f) {
        v = func_001178();
    } else {
        v = r;
    }
    *pf = v;
    D_00205A1C = D_0023E540.f_30;
    D_00205A20 = D_0023E540.f_38;
    Copy4(D_00331E90, D_0023E540.v_200);
    D_00205A08 = D_0023E540.w_9A0;
    func_0B8188(3);
    func_0B8068();
    func_0BD820();
    func_0BDB40();
    func_0276A8();
}
