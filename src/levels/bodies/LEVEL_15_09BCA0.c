/* LEVEL_15:0x09BCA0 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_00151685;
extern float D_0015168C;
extern float D_0015169C;
extern float D_001516A0;
extern int D_00151688;
extern char D_001516B0[];
extern char D_001516D8[];
extern State D_00240270;
extern float D_002402D0[4];
extern Big D_0017D2C0;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_016A10(int a, int b);
extern void func_0934A8(char *p);
extern int func_0F2B08(void);
extern float func_000F58(void);
extern float func_000F40(void);
extern void func_097418(int a);
extern void func_0972F8(void);
extern void func_09CB18(void);
extern void func_09CE38(void);
extern void func_021D78(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_09BCA0(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_00151685 = ret;
    if (D_00151685 == 0) {
        func_016A10(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_00240270.w_04 = D_00240270.w_00;
    D_00240270.b_1D = 0;
    func_0934A8(D_001516B0);
    func_0934A8(D_001516D8);
    func_0F2B08();
    D_00240270.w_14 = flag;
    r = func_000F58();
    pf = &D_0015168C;
    *pf = r;
    if (r == 0.0f) {
        v = func_000F40();
    } else {
        v = r;
    }
    *pf = v;
    D_0015169C = D_0017D2C0.f_30;
    D_001516A0 = D_0017D2C0.f_38;
    Copy4(D_002402D0, D_0017D2C0.v_200);
    D_00151688 = D_0017D2C0.w_9A0;
    func_097418(3);
    func_0972F8();
    func_09CB18();
    func_09CE38();
    func_021D78();
}
