/* LEVEL_19:0x0A9F88 -- placement copy of LEVEL_16_0AA6B0.c: pauses the sound system and, when the pause took, snapshots the camera values into the transition globals and restarts the frame subsystems. */

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

extern struct Cam D_001E4210;
extern struct Trans D_00276AF0;
extern unsigned char D_001ABC05;
extern int D_001ABC08;
extern float D_001ABC0C;
extern float D_001ABC1C;
extern float D_001ABC20;
extern float D_00276B50[4];
extern char D_001ABC30[];
extern char D_001ABC58[];

extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern void SND_FlushAndSync(unsigned int a) __asm__("SND_FlushAndSync__FUi");

extern void func_018898(int a, int b);
extern void func_0A0DD8(char *s);
extern int func_111050(void);
extern float func_000FF8(void);
extern float func_000FE0(void);
extern void func_0A5820(int a);
extern void func_11D0F0(void);
extern void func_11D678(void);
extern void func_0A5700(void);
extern void func_0AB1B0(void);
extern void func_0AB510(void);
extern void func_025690(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0A9F88(int arg)
{
    int r;
    float x;
    float y;
    float *pr;

    r = SND_PauseAtrac(1, -1);
    D_001ABC05 = r;
    if (D_001ABC05 == 0) {
        func_018898(4, 0);
        return;
    }
    SND_PausePositionalSounds(1);
    SND_FlushAndSync(0x3C);
    D_00276AF0.w_04 = D_00276AF0.w_00;
    D_00276AF0.b_1D = 0;
    func_0A0DD8(D_001ABC30);
    func_0A0DD8(D_001ABC58);
    func_111050();
    D_00276AF0.w_14 = arg;
    x = func_000FF8();
    D_001ABC0C = x;
    pr = &D_001ABC0C;
    y = x == 0.0f ? func_000FE0() : x;
    *pr = y;
    D_001ABC1C = D_001E4210.f_30;
    D_001ABC20 = D_001E4210.f_38;
    Copy4(D_00276B50, D_001E4210.v_200);
    D_001ABC08 = D_001E4210.w_9A0;
    func_0A5820(3);
    func_11D0F0();
    func_11D678();
    func_0A5700();
    func_0AB1B0();
    func_0AB510();
    func_025690();
}
