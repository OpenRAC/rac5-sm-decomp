/* LEVEL_04:0x0C1028 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_00343230[];
extern char D_0024F950[];
extern int D_00215EC8;
extern int D_00215ED4;
extern unsigned char D_0020DAA9;
extern void func_0CF830(int a);
extern void func_023810(char *a, int b);
extern void func_0C1DA8(void);
extern void func_0C1CE8(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0C0F98(void);
extern void func_1A96B8(int a, int b);
extern void func_140148(void);

void func_0C1028(void)
{
    char *s0;
    int *gp;

    s0 = D_00343230;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0CF830(0x14);
    }
    func_023810(D_0024F950, D_00215EC8);
    func_0C1DA8();
    func_0C1CE8();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_00215ED4;
    *gp = 0;
    func_0C0F98();
    *(int *)(s0 + 4) = 0;
    if (D_0020DAA9 != 0) {
        func_1A96B8(1, 1);
    }
    func_140148();
    *(int *)(s0 + 0x58) = 0;
}
