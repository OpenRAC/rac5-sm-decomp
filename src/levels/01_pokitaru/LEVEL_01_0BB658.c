/* LEVEL_01:0x0BB658 -- pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_001FCA05;
extern float D_001FCA0C;
extern float D_001FCA1C;
extern float D_001FCA20;
extern int D_001FCA08;
extern char D_001FCA30[];
extern char D_001FCA58[];
extern State D_00328A30;
extern float D_00328A90[4];
extern Big D_00235140;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_01A828(int a, int b);
extern void func_0B2BE0(char *p);
extern int func_133C40(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0B6F08(int a);
extern void func_0B6DE8(void);
extern void func_0BC4D0(void);
extern void func_0BC7F0(void);
extern void func_027DC8(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0BB658(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_001FCA05 = ret;
    if (D_001FCA05 == 0) {
        func_01A828(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_00328A30.w_04 = D_00328A30.w_00;
    D_00328A30.b_1D = 0;
    func_0B2BE0(D_001FCA30);
    func_0B2BE0(D_001FCA58);
    func_133C40();
    D_00328A30.w_14 = flag;
    r = func_001400();
    pf = &D_001FCA0C;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_001FCA1C = D_00235140.f_30;
    D_001FCA20 = D_00235140.f_38;
    Copy4(D_00328A90, D_00235140.v_200);
    D_001FCA08 = D_00235140.w_9A0;
    func_0B6F08(3);
    func_0B6DE8();
    func_0BC4D0();
    func_0BC7F0();
    func_027DC8();
}
