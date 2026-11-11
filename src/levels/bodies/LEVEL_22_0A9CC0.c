/* LEVEL_22:0x0A9CC0 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_0027E5F0[];
extern char D_00186D40[];
extern int D_0015BD88;
extern int D_0015BD94;
extern unsigned char D_00153969;
extern void func_0B8560(int a);
extern void func_01EAD0(char *a, int b);
extern void func_0AAA40(void);
extern void func_0AA980(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0A9C60(void);
extern void func_132218(int a, int b);
extern void func_10B198(void);

void func_0A9CC0(void)
{
    char *s0;
    int *gp;

    s0 = D_0027E5F0;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0B8560(0x14);
    }
    func_01EAD0(D_00186D40, D_0015BD88);
    func_0AAA40();
    func_0AA980();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_0015BD94;
    *gp = 0;
    func_0A9C60();
    *(int *)(s0 + 4) = 0;
    if (D_00153969 != 0) {
        func_132218(1, 1);
    }
    func_10B198();
    *(int *)(s0 + 0x58) = 0;
}
