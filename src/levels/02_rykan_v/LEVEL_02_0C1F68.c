/* LEVEL_02:0x0C1F68 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_002119C5;
extern float D_002119CC;
extern float D_002119DC;
extern float D_002119E0;
extern int D_002119C8;
extern char D_002119F0[];
extern char D_00211A18[];
extern State D_0033FF30;
extern float D_0033FF90[4];
extern Big D_0024C650;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_01B188(int a, int b);
extern void func_0B94F0(char *p);
extern int func_139FF0(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0BD818(int a);
extern void func_0BD6F8(void);
extern void func_0C2DE0(void);
extern void func_0C3100(void);
extern void func_0285B0(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0C1F68(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_002119C5 = ret;
    if (D_002119C5 == 0) {
        func_01B188(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_0033FF30.w_04 = D_0033FF30.w_00;
    D_0033FF30.b_1D = 0;
    func_0B94F0(D_002119F0);
    func_0B94F0(D_00211A18);
    func_139FF0();
    D_0033FF30.w_14 = flag;
    r = func_001400();
    pf = &D_002119CC;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_002119DC = D_0024C650.f_30;
    D_002119E0 = D_0024C650.f_38;
    Copy4(D_0033FF90, D_0024C650.v_200);
    D_002119C8 = D_0024C650.w_9A0;
    func_0BD818(3);
    func_0BD6F8();
    func_0C2DE0();
    func_0C3100();
    func_0285B0();
}
