/* LEVEL_07:0x0BD6B8 -- placement copy of LEVEL_01_0BB658.c: pauses audio, resets a few global state words and camera values from a defaults block, then runs a fixed sequence of helpers. */

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

extern unsigned char D_00210D05;
extern float D_00210D0C;
extern float D_00210D1C;
extern float D_00210D20;
extern int D_00210D08;
extern char D_00210D30[];
extern char D_00210D58[];
extern State D_0033E330;
extern float D_0033E390[4];
extern Big D_0024AA40;

extern int SND_PauseAtrac__Fbi(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern void SND_FlushAndSync__FUi(unsigned int a);
extern void func_01AEE8(int a, int b);
extern void func_0B4C40(char *p);
extern int func_136C40(void);
extern float func_001400(void);
extern float func_0013E8(void);
extern void func_0B8F68(int a);
extern void func_0B8E48(void);
extern void func_0BE530(void);
extern void func_0BE850(void);
extern void func_028128(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0BD6B8(int flag)
{
    float v;
    int ret;
    float r;
    float *pf;

    ret = SND_PauseAtrac__Fbi(1, -1);
    D_00210D05 = ret;
    if (D_00210D05 == 0) {
        func_01AEE8(4, 0);
        return;
    }
    SND_PausePositionalSounds__Fb(1);
    SND_FlushAndSync__FUi(0x3C);
    D_0033E330.w_04 = D_0033E330.w_00;
    D_0033E330.b_1D = 0;
    func_0B4C40(D_00210D30);
    func_0B4C40(D_00210D58);
    func_136C40();
    D_0033E330.w_14 = flag;
    r = func_001400();
    pf = &D_00210D0C;
    *pf = r;
    if (r == 0.0f) {
        v = func_0013E8();
    } else {
        v = r;
    }
    *pf = v;
    D_00210D1C = D_0024AA40.f_30;
    D_00210D20 = D_0024AA40.f_38;
    Copy4(D_0033E390, D_0024AA40.v_200);
    D_00210D08 = D_0024AA40.w_9A0;
    func_0B8F68(3);
    func_0B8E48();
    func_0BE530();
    func_0BE850();
    func_028128();
}
