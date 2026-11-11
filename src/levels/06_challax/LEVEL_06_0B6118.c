/* LEVEL_06:0x0B6118 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_003157B0[];
extern char D_00221EC0[];
extern int D_001EB908;
extern int D_001EB914;
extern unsigned char D_001E34E9;
extern void func_0C4918(int a);
extern void func_022130(char *a, int b);
extern void func_0B6E90(void);
extern void func_0B6DD0(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0B60B8(void);
extern void func_1936E0(int a, int b);
extern void func_12A398(void);

void func_0B6118(void)
{
    char *s0;
    int *gp;

    s0 = D_003157B0;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0C4918(0x14);
    }
    func_022130(D_00221EC0, D_001EB908);
    func_0B6E90();
    func_0B6DD0();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_001EB914;
    *gp = 0;
    func_0B60B8();
    *(int *)(s0 + 4) = 0;
    if (D_001E34E9 != 0) {
        func_1936E0(1, 1);
    }
    func_12A398();
    *(int *)(s0 + 0x58) = 0;
}
