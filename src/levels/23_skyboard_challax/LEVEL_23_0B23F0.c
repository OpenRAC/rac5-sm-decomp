/* LEVEL_23:0x0B23F0 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_001CFE05;
extern float D_001CFE0C;
extern float D_001CFE1C;
extern float D_001CFE20;
extern int D_001CFE08;
extern char D_001CFE30[];
extern char D_001CFE58[];
extern State D_002F9E70;
extern float D_002F9ED0[4];
extern Big D_002025C0;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_019338(int a, int b);
extern void func_0A99C0(char *p);
extern int func_1253B8(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0ADCD0(int a);
extern void func_0ADBB0(void);
extern void func_0B3270(void);
extern void func_0B3590(void);
extern void func_025B20(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0B23F0(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_001CFE05 = ret;
    if (D_001CFE05 == 0) {
        func_019338(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_002F9E70.w_04 = D_002F9E70.w_00;
    D_002F9E70.b_1D = 0;
    func_0A99C0(D_001CFE30);
    func_0A99C0(D_001CFE58);
    func_1253B8();
    D_002F9E70.w_14 = flag;
    r = func_001400();
    pf = &D_001CFE0C;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_001CFE1C = D_002025C0.f_30;
    D_001CFE20 = D_002025C0.f_38;
    Copy4(D_002F9ED0, D_002025C0.v_200);
    D_001CFE08 = D_002025C0.w_9A0;
    func_0ADCD0(3);
    func_0ADBB0();
    func_0B3270();
    func_0B3590();
    func_025B20();
}
