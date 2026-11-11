/* LEVEL_09:0x0B8908 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_001E6805;
extern float D_001E680C;
extern float D_001E681C;
extern float D_001E6820;
extern int D_001E6808;
extern char D_001E6830[];
extern char D_001E6858[];
extern State D_003101B0;
extern float D_00310210[4];
extern Big D_0021C8C0;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_019C18(int a, int b);
extern void func_0AFE90(char *p);
extern int func_12CBD8(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0B41B8(int a);
extern void func_0B4098(void);
extern void func_0B9780(void);
extern void func_0B9AA0(void);
extern void func_026DD0(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0B8908(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_001E6805 = ret;
    if (D_001E6805 == 0) {
        func_019C18(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_003101B0.w_04 = D_003101B0.w_00;
    D_003101B0.b_1D = 0;
    func_0AFE90(D_001E6830);
    func_0AFE90(D_001E6858);
    func_12CBD8();
    D_003101B0.w_14 = flag;
    r = func_001400();
    pf = &D_001E680C;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_001E681C = D_0021C8C0.f_30;
    D_001E6820 = D_0021C8C0.f_38;
    Copy4(D_00310210, D_0021C8C0.v_200);
    D_001E6808 = D_0021C8C0.w_9A0;
    func_0B41B8(3);
    func_0B4098();
    func_0B9780();
    func_0B9AA0();
    func_026DD0();
}
