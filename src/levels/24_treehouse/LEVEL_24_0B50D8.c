/* LEVEL_24:0x0B50D8 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_002F48F0[];
extern char D_00201040[];
extern int D_001CD688;
extern int D_001CD694;
extern unsigned char D_001C5269;
extern void func_0C38E0(int a);
extern void func_021908(char *a, int b);
extern void func_0B5E58(void);
extern void func_0B5D98(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0B5048(void);
extern void func_17C1A8(int a, int b);
extern void func_1297C8(void);

void func_0B50D8(void)
{
    char *s0;
    int *gp;

    s0 = D_002F48F0;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0C38E0(0x14);
    }
    func_021908(D_00201040, D_001CD688);
    func_0B5E58();
    func_0B5D98();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_001CD694;
    *gp = 0;
    func_0B5048();
    *(int *)(s0 + 4) = 0;
    if (D_001C5269 != 0) {
        func_17C1A8(1, 1);
    }
    func_1297C8();
    *(int *)(s0 + 0x58) = 0;
}
