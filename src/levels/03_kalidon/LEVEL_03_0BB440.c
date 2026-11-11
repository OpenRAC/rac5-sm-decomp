/* LEVEL_03:0x0BB440 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_00215085;
extern float D_0021508C;
extern float D_0021509C;
extern float D_002150A0;
extern int D_00215088;
extern char D_002150B0[];
extern char D_002150D8[];
extern State D_003438B0;
extern float D_00343910[4];
extern Big D_0024FFC0;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_01A590(int a, int b);
extern void func_0B29C8(char *p);
extern int func_132008(void);
extern float func_001428(void);
extern float func_001410(void);
extern void func_0B6CF0(int a);
extern void func_0B6BD0(void);
extern void func_0BC2B8(void);
extern void func_0BC5D8(void);
extern void func_027CA8(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0BB440(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_00215085 = ret;
    if (D_00215085 == 0) {
        func_01A590(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_003438B0.w_04 = D_003438B0.w_00;
    D_003438B0.b_1D = 0;
    func_0B29C8(D_002150B0);
    func_0B29C8(D_002150D8);
    func_132008();
    D_003438B0.w_14 = flag;
    r = func_001428();
    pf = &D_0021508C;
    *pf = r;
    if (r == 0.0f) {
        v = func_001410();
    } else {
        v = r;
    }
    *pf = v;
    D_0021509C = D_0024FFC0.f_30;
    D_002150A0 = D_0024FFC0.f_38;
    Copy4(D_00343910, D_0024FFC0.v_200);
    D_00215088 = D_0024FFC0.w_9A0;
    func_0B6CF0(3);
    func_0B6BD0();
    func_0BC2B8();
    func_0BC5D8();
    func_027CA8();
}
