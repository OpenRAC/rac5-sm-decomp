/* LEVEL_09:0x0B8AC8 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_003101B0[];
extern char D_0021C8C0[];
extern int D_001E6808;
extern int D_001E6814;
extern unsigned char D_001DE3E9;
extern void func_0C72C8(int a);
extern void func_022D20(char *a, int b);
extern void func_0B9840(void);
extern void func_0B9780(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0B8A68(void);
extern void func_193338(int a, int b);
extern void func_12CC60(void);

void func_0B8AC8(void)
{
    char *s0;
    int *gp;

    s0 = D_003101B0;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0C72C8(0x14);
    }
    func_022D20(D_0021C8C0, D_001E6808);
    func_0B9840();
    func_0B9780();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_001E6814;
    *gp = 0;
    func_0B8A68();
    *(int *)(s0 + 4) = 0;
    if (D_001DE3E9 != 0) {
        func_193338(1, 1);
    }
    func_12CC60();
    *(int *)(s0 + 0x58) = 0;
}
