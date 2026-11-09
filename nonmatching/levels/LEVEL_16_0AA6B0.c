/* LEVEL_16.REL:0x0AA6B0: reviewed 368-byte candidate, held for ABI review.
 * Pauses the sound system and, when the pause took, snapshots the camera
 * values into the transition globals and restarts the frame subsystems.
 * pinned C with gnu-ee-trial links 368/368 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_1109B0 returning void with no arguments, but the accepted
 * LEVEL_16_1109B0.c defines it returning int with no arguments.
 * It declares func_0A5FA8 returning void with (int), but the accepted
 * LEVEL_16_0A5FA8.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern struct Cam D_001E4090;
extern struct Trans D_00276970;
extern unsigned char D_001AAA85;
extern int D_001AAA88;
extern float D_001AAA8C;
extern float D_001AAA9C;
extern float D_001AAAA0;
extern float D_002769D0[4];
extern char D_001AAAB0[];
extern char D_001AAAD8[];

extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern void SND_FlushAndSync(unsigned int a) __asm__("SND_FlushAndSync__FUi");

extern void func_018B98(int a, int b);
extern void func_0A1548(char *s);
extern void func_1109B0(void);
extern float func_000FF8(void);
extern float func_000FE0(void);
extern void func_0A5FA8(int a);
extern void func_11C780(void);
extern void func_11CD08(void);
extern void func_0A5E88(void);
extern void func_0AB8D8(void);
extern void func_0ABC38(void);
extern void func_025AE8(void);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_0AA6B0(int arg)
{
    int r;
    float x;
    float y;
    float *pr;

    r = SND_PauseAtrac(1, -1);
    D_001AAA85 = r;
    if (D_001AAA85 == 0) {
        func_018B98(4, 0);
        return;
    }
    SND_PausePositionalSounds(1);
    SND_FlushAndSync(0x3C);
    D_00276970.w_04 = D_00276970.w_00;
    D_00276970.b_1D = 0;
    func_0A1548(D_001AAAB0);
    func_0A1548(D_001AAAD8);
    func_1109B0();
    D_00276970.w_14 = arg;
    x = func_000FF8();
    D_001AAA8C = x;
    pr = &D_001AAA8C;
    y = x == 0.0f ? func_000FE0() : x;
    *pr = y;
    D_001AAA9C = D_001E4090.f_30;
    D_001AAAA0 = D_001E4090.f_38;
    Copy4(D_002769D0, D_001E4090.v_200);
    D_001AAA88 = D_001E4090.w_9A0;
    func_0A5FA8(3);
    func_11C780();
    func_11CD08();
    func_0A5E88();
    func_0AB8D8();
    func_0ABC38();
    func_025AE8();
}
