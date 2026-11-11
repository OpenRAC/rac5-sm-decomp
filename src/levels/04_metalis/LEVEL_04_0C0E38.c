/* LEVEL_04:0x0C0E38 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_00215EC5;
extern float D_00215ECC;
extern float D_00215EDC;
extern float D_00215EE0;
extern int D_00215EC8;
extern char D_00215EF0[];
extern char D_00215F18[];
extern State D_00343230;
extern float D_00343290[4];
extern Big D_0024F950;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_01A4A8(int a, int b);
extern void func_0B8190(char *p);
extern int func_1400C0(void);
extern float func_001208(void);
extern float func_0011F0(void);
extern void func_0BC710(int a);
extern void func_0BC5F0(void);
extern void func_0C1CE8(void);
extern void func_0C2008(void);
extern void func_027A58(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0C0E38(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_00215EC5 = ret;
    if (D_00215EC5 == 0) {
        func_01A4A8(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_00343230.w_04 = D_00343230.w_00;
    D_00343230.b_1D = 0;
    func_0B8190(D_00215EF0);
    func_0B8190(D_00215F18);
    func_1400C0();
    D_00343230.w_14 = flag;
    r = func_001208();
    pf = &D_00215ECC;
    *pf = r;
    if (r == 0.0f) {
        v = func_0011F0();
    } else {
        v = r;
    }
    *pf = v;
    D_00215EDC = D_0024F950.f_30;
    D_00215EE0 = D_0024F950.f_38;
    Copy4(D_00343290, D_0024F950.v_200);
    D_00215EC8 = D_0024F950.w_9A0;
    func_0BC710(3);
    func_0BC5F0();
    func_0C1CE8();
    func_0C2008();
    func_027A58();
}
