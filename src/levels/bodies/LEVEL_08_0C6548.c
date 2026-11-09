/* LEVEL_08:0x0C6548 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_002458C5;
extern float D_002458CC;
extern float D_002458DC;
extern float D_002458E0;
extern int D_002458C8;
extern char D_002458F0[];
extern char D_00245918[];
extern State D_00377CB0;
extern float D_00377D10[4];
extern Big D_002843D0;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_01B1A0(int a, int b);
extern void func_0BD878(char *p);
extern int func_145178(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0C1DF8(int a);
extern void func_0C1CD8(void);
extern void func_0C73F8(void);
extern void func_0C7718(void);
extern void func_0283F0(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0C6548(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_002458C5 = ret;
    if (D_002458C5 == 0) {
        func_01B1A0(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_00377CB0.w_04 = D_00377CB0.w_00;
    D_00377CB0.b_1D = 0;
    func_0BD878(D_002458F0);
    func_0BD878(D_00245918);
    func_145178();
    D_00377CB0.w_14 = flag;
    r = func_001400();
    pf = &D_002458CC;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_002458DC = D_002843D0.f_30;
    D_002458E0 = D_002843D0.f_38;
    Copy4(D_00377D10, D_002843D0.v_200);
    D_002458C8 = D_002843D0.w_9A0;
    func_0C1DF8(3);
    func_0C1CD8();
    func_0C73F8();
    func_0C7718();
    func_0283F0();
}
