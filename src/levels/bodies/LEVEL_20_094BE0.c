/* LEVEL_20:0x094BE0 -- placement copy of LEVEL_16_0AA6B0.c: pauses the sound system and, when the pause took, snapshots the camera values into the transition globals and restarts the frame subsystems. */

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

extern struct Cam D_0013BA10;
extern struct Trans D_0019A1B0;
extern unsigned char D_0010D165;
extern int D_0010D168;
extern float D_0010D16C;
extern float D_0010D17C;
extern float D_0010D180;
extern float D_0019A210[4];
extern char D_0010D190[];
extern char D_0010D1B8[];

extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern void SND_FlushAndSync(unsigned int a) __asm__("SND_FlushAndSync__FUi");

extern void func_016950(int a, int b);
extern void func_08BC40(char *s);
extern int func_0E3798(void);
extern float func_000FB8(void);
extern float func_000FA0(void);
extern void func_090528(int a);
extern void func_0EEB28(void);
extern void func_0EF0B0(void);
extern void func_090408(void);
extern void func_095E08(void);
extern void func_096168(void);
extern void func_022608(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_094BE0(int arg)
{
    int r;
    float x;
    float y;
    float *pr;

    r = SND_PauseAtrac(1, -1);
    D_0010D165 = r;
    if (D_0010D165 == 0) {
        func_016950(4, 0);
        return;
    }
    SND_PausePositionalSounds(1);
    SND_FlushAndSync(0x3C);
    D_0019A1B0.w_04 = D_0019A1B0.w_00;
    D_0019A1B0.b_1D = 0;
    func_08BC40(D_0010D190);
    func_08BC40(D_0010D1B8);
    func_0E3798();
    D_0019A1B0.w_14 = arg;
    x = func_000FB8();
    D_0010D16C = x;
    pr = &D_0010D16C;
    y = x == 0.0f ? func_000FA0() : x;
    *pr = y;
    D_0010D17C = D_0013BA10.f_30;
    D_0010D180 = D_0013BA10.f_38;
    Copy4(D_0019A210, D_0013BA10.v_200);
    D_0010D168 = D_0013BA10.w_9A0;
    func_090528(3);
    func_0EEB28();
    func_0EF0B0();
    func_090408();
    func_095E08();
    func_096168();
    func_022608();
}
