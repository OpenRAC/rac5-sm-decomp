/* LEVEL_03:0x0BB600 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_003438B0[];
extern char D_0024FFC0[];
extern int D_00215088;
extern int D_00215094;
extern unsigned char D_0020CC69;
extern void func_0C9E00(int a);
extern void func_0238F8(char *a, int b);
extern void func_0BC378(void);
extern void func_0BC2B8(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0BB5A0(void);
extern void func_1B0C10(int a, int b);
extern void func_132090(void);

void func_0BB600(void)
{
    char *s0;
    int *gp;

    s0 = D_003438B0;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0C9E00(0x14);
    }
    func_0238F8(D_0024FFC0, D_00215088);
    func_0BC378();
    func_0BC2B8();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_00215094;
    *gp = 0;
    func_0BB5A0();
    *(int *)(s0 + 4) = 0;
    if (D_0020CC69 != 0) {
        func_1B0C10(1, 1);
    }
    func_132090();
    *(int *)(s0 + 0x58) = 0;
}
