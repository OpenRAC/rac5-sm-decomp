/* LEVEL_06:0x0B5F58 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_001EB905;
extern float D_001EB90C;
extern float D_001EB91C;
extern float D_001EB920;
extern int D_001EB908;
extern char D_001EB930[];
extern char D_001EB958[];
extern State D_003157B0;
extern float D_00315810[4];
extern Big D_00221EC0;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_019028(int a, int b);
extern void func_0AD420(char *p);
extern int func_12A310(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0B17D8(int a);
extern void func_0B16B8(void);
extern void func_0B6DD0(void);
extern void func_0B70F0(void);
extern void func_026378(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0B5F58(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_001EB905 = ret;
    if (D_001EB905 == 0) {
        func_019028(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_003157B0.w_04 = D_003157B0.w_00;
    D_003157B0.b_1D = 0;
    func_0AD420(D_001EB930);
    func_0AD420(D_001EB958);
    func_12A310();
    D_003157B0.w_14 = flag;
    r = func_001400();
    pf = &D_001EB90C;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_001EB91C = D_00221EC0.f_30;
    D_001EB920 = D_00221EC0.f_38;
    Copy4(D_00315810, D_00221EC0.v_200);
    D_001EB908 = D_00221EC0.w_9A0;
    func_0B17D8(3);
    func_0B16B8();
    func_0B6DD0();
    func_0B70F0();
    func_026378();
}
