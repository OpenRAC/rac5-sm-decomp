/* LEVEL_23:0x0B25B0 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_002F9E70[];
extern char D_002025C0[];
extern int D_001CFE08;
extern int D_001CFE14;
extern unsigned char D_001C79E9;
extern void func_0C0E50(int a);
extern void func_021D38(char *a, int b);
extern void func_0B3330(void);
extern void func_0B3270(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0B2550(void);
extern void func_17EEF8(int a, int b);
extern void func_125440(void);

void func_0B25B0(void)
{
    char *s0;
    int *gp;

    s0 = D_002F9E70;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0C0E50(0x14);
    }
    func_021D38(D_002025C0, D_001CFE08);
    func_0B3330();
    func_0B3270();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_001CFE14;
    *gp = 0;
    func_0B2550();
    *(int *)(s0 + 4) = 0;
    if (D_001C79E9 != 0) {
        func_17EEF8(1, 1);
    }
    func_125440();
    *(int *)(s0 + 0x58) = 0;
}
