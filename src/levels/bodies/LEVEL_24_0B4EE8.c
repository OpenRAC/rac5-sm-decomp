/* LEVEL_24:0x0B4EE8 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_001CD685;
extern float D_001CD68C;
extern float D_001CD69C;
extern float D_001CD6A0;
extern int D_001CD688;
extern char D_001CD6B0[];
extern char D_001CD6D8[];
extern State D_002F48F0;
extern float D_002F4950[4];
extern Big D_00201040;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_018E18(int a, int b);
extern void func_0AC458(char *p);
extern int func_129740(void);
extern float func_001208(void);
extern float func_0011F0(void);
extern void func_0B0798(int a);
extern void func_0B0678(void);
extern void func_0B5D98(void);
extern void func_0B60B8(void);
extern void func_0256F8(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0B4EE8(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_001CD685 = ret;
    if (D_001CD685 == 0) {
        func_018E18(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_002F48F0.w_04 = D_002F48F0.w_00;
    D_002F48F0.b_1D = 0;
    func_0AC458(D_001CD6B0);
    func_0AC458(D_001CD6D8);
    func_129740();
    D_002F48F0.w_14 = flag;
    r = func_001208();
    pf = &D_001CD68C;
    *pf = r;
    if (r == 0.0f) {
        v = func_0011F0();
    } else {
        v = r;
    }
    *pf = v;
    D_001CD69C = D_00201040.f_30;
    D_001CD6A0 = D_00201040.f_38;
    Copy4(D_002F4950, D_00201040.v_200);
    D_001CD688 = D_00201040.w_9A0;
    func_0B0798(3);
    func_0B0678();
    func_0B5D98();
    func_0B60B8();
    func_0256F8();
}
