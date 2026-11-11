/* LEVEL_17:0x0A9BF0 -- placement copy of LEVEL_16_0AA6B0.c: pauses the sound system and, when the pause took, snapshots the camera values into the transition globals and restarts the frame subsystems. */

struct Cam {
    char pad_00[0x30];
    float f_30;
    char pad_34[0x38 - 0x34];
    float f_38;
    char pad_3C[0x200 - 0x3C];
    float v_200[4];
    char pad_210[0x9A0 - 0x210];
    int w_9A0;
};

struct Trans {
    int w_00;
    int w_04;
    char pad_08[0x14 - 0x08];
    int w_14;
    char pad_18[0x1D - 0x18];
    unsigned char b_1D;
};

extern struct Cam D_001D5390;
extern struct Trans D_00267C70;
extern unsigned char D_0019E085;
extern int D_0019E088;
extern float D_0019E08C;
extern float D_0019E09C;
extern float D_0019E0A0;
extern float D_00267CD0[4];
extern char D_0019E0B0[];
extern char D_0019E0D8[];

extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern void SND_FlushAndSync(unsigned int a) __asm__("SND_FlushAndSync__FUi");

extern void func_018518(int a, int b);
extern void func_0A0A40(char *s);
extern int func_10FF28(void);
extern float func_000FF8(void);
extern float func_000FE0(void);
extern void func_0A5488(int a);
extern void func_11C0F8(void);
extern void func_11C680(void);
extern void func_0A5368(void);
extern void func_0AAE18(void);
extern void func_0AB178(void);
extern void func_025468(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0A9BF0(int arg)
{
    int r;
    float x;
    float y;
    float *pr;

    r = SND_PauseAtrac(1, -1);
    D_0019E085 = r;
    if (D_0019E085 == 0) {
        func_018518(4, 0);
        return;
    }
    SND_PausePositionalSounds(1);
    SND_FlushAndSync(0x3C);
    D_00267C70.w_04 = D_00267C70.w_00;
    D_00267C70.b_1D = 0;
    func_0A0A40(D_0019E0B0);
    func_0A0A40(D_0019E0D8);
    func_10FF28();
    D_00267C70.w_14 = arg;
    x = func_000FF8();
    D_0019E08C = x;
    pr = &D_0019E08C;
    y = x == 0.0f ? func_000FE0() : x;
    *pr = y;
    D_0019E09C = D_001D5390.f_30;
    D_0019E0A0 = D_001D5390.f_38;
    Copy4(D_00267CD0, D_001D5390.v_200);
    D_0019E088 = D_001D5390.w_9A0;
    func_0A5488(3);
    func_11C0F8();
    func_11C680();
    func_0A5368();
    func_0AAE18();
    func_0AB178();
    func_025468();
}
