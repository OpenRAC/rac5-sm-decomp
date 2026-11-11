/* LEVEL_08:0x0C6738 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_00377CB0[];
extern char D_002843D0[];
extern int D_002458C8;
extern int D_002458D4;
extern unsigned char D_0023D4A9;
extern void func_0D4F40(int a);
extern void func_0242A8(char *a, int b);
extern void func_0C74B8(void);
extern void func_0C73F8(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0C66A8(void);
extern void func_1D01C0(int a, int b);
extern void func_145200(void);

void func_0C6738(void)
{
    char *s0;
    int *gp;

    s0 = D_00377CB0;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0D4F40(0x14);
    }
    func_0242A8(D_002843D0, D_002458C8);
    func_0C74B8();
    func_0C73F8();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_002458D4;
    *gp = 0;
    func_0C66A8();
    *(int *)(s0 + 4) = 0;
    if (D_0023D4A9 != 0) {
        func_1D01C0(1, 1);
    }
    func_145200();
    *(int *)(s0 + 0x58) = 0;
}
