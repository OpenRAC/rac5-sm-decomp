/* LEVEL_07:0x0BD878 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_0033E330[];
extern char D_0024AA40[];
extern int D_00210D08;
extern int D_00210D14;
extern unsigned char D_002088E9;
extern void func_0CC078(int a);
extern void func_023FF0(char *a, int b);
extern void func_0BE5F0(void);
extern void func_0BE530(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0BD818(void);
extern void func_1AFCB0(int a, int b);
extern void func_136CC8(void);

void func_0BD878(void)
{
    char *s0;
    int *gp;

    s0 = D_0033E330;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0CC078(0x14);
    }
    func_023FF0(D_0024AA40, D_00210D08);
    func_0BE5F0();
    func_0BE530();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_00210D14;
    *gp = 0;
    func_0BD818();
    *(int *)(s0 + 4) = 0;
    if (D_002088E9 != 0) {
        func_1AFCB0(1, 1);
    }
    func_136CC8();
    *(int *)(s0 + 0x58) = 0;
}
