/* LEVEL_18:0x0A9688 -- placement copy of LEVEL_16_0AA6B0.c: pauses the sound system and, when the pause took, snapshots the camera values into the transition globals and restarts the frame subsystems. */

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

extern struct Cam D_001E4410;
extern struct Trans D_00276CF0;
extern unsigned char D_001ABF05;
extern int D_001ABF08;
extern float D_001ABF0C;
extern float D_001ABF1C;
extern float D_001ABF20;
extern float D_00276D50[4];
extern char D_001ABF30[];
extern char D_001ABF58[];

extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern void SND_FlushAndSync(unsigned int a) __asm__("SND_FlushAndSync__FUi");

extern void func_0181E0(int a, int b);
extern void func_0A0558(char *s);
extern int func_10F660(void);
extern float func_001068(void);
extern float func_001050(void);
extern void func_0A4F20(int a);
extern void func_11B770(void);
extern void func_11BCF8(void);
extern void func_0A4E00(void);
extern void func_0AA8B0(void);
extern void func_0AAC10(void);
extern void func_025098(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0A9688(int arg)
{
    int r;
    float x;
    float y;
    float *pr;

    r = SND_PauseAtrac(1, -1);
    D_001ABF05 = r;
    if (D_001ABF05 == 0) {
        func_0181E0(4, 0);
        return;
    }
    SND_PausePositionalSounds(1);
    SND_FlushAndSync(0x3C);
    D_00276CF0.w_04 = D_00276CF0.w_00;
    D_00276CF0.b_1D = 0;
    func_0A0558(D_001ABF30);
    func_0A0558(D_001ABF58);
    func_10F660();
    D_00276CF0.w_14 = arg;
    x = func_001068();
    D_001ABF0C = x;
    pr = &D_001ABF0C;
    y = x == 0.0f ? func_001050() : x;
    *pr = y;
    D_001ABF1C = D_001E4410.f_30;
    D_001ABF20 = D_001E4410.f_38;
    Copy4(D_00276D50, D_001E4410.v_200);
    D_001ABF08 = D_001E4410.w_9A0;
    func_0A4F20(3);
    func_11B770();
    func_11BCF8();
    func_0A4E00();
    func_0AA8B0();
    func_0AAC10();
    func_025098();
}
