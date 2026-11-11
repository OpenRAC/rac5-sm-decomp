/* LEVEL_05:0x0B9DC0 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_003148F0[];
extern char D_00220E40[];
extern int D_001EBD88;
extern int D_001EBD94;
extern unsigned char D_001E3969;
extern void func_0C85C0(int a);
extern void func_022B28(char *a, int b);
extern void func_0BAB38(void);
extern void func_0BAA78(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0B9D60(void);
extern void func_19BE08(int a, int b);
extern void func_12F640(void);

void func_0B9DC0(void)
{
    char *s0;
    int *gp;

    s0 = D_003148F0;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0C85C0(0x14);
    }
    func_022B28(D_00220E40, D_001EBD88);
    func_0BAB38();
    func_0BAA78();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_001EBD94;
    *gp = 0;
    func_0B9D60();
    *(int *)(s0 + 4) = 0;
    if (D_001E3969 != 0) {
        func_19BE08(1, 1);
    }
    func_12F640();
    *(int *)(s0 + 0x58) = 0;
}
