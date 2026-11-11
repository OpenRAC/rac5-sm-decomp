/* LEVEL_05:0x0B9C00 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_001EBD85;
extern float D_001EBD8C;
extern float D_001EBD9C;
extern float D_001EBDA0;
extern int D_001EBD88;
extern char D_001EBDB0[];
extern char D_001EBDD8[];
extern State D_003148F0;
extern float D_00314950[4];
extern Big D_00220E40;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_019DC0(int a, int b);
extern void func_0B11A0(char *p);
extern int func_12F5B8(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0B54B0(int a);
extern void func_0B5390(void);
extern void func_0BAA78(void);
extern void func_0BAD98(void);
extern void func_026C08(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0B9C00(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_001EBD85 = ret;
    if (D_001EBD85 == 0) {
        func_019DC0(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_003148F0.w_04 = D_003148F0.w_00;
    D_003148F0.b_1D = 0;
    func_0B11A0(D_001EBDB0);
    func_0B11A0(D_001EBDD8);
    func_12F5B8();
    D_003148F0.w_14 = flag;
    r = func_001400();
    pf = &D_001EBD8C;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_001EBD9C = D_00220E40.f_30;
    D_001EBDA0 = D_00220E40.f_38;
    Copy4(D_00314950, D_00220E40.v_200);
    D_001EBD88 = D_00220E40.w_9A0;
    func_0B54B0(3);
    func_0B5390();
    func_0BAA78();
    func_0BAD98();
    func_026C08();
}
