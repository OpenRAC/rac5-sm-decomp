/* LEVEL_10:0x0BCB60 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_00331E30[];
extern char D_0023E540[];
extern int D_00205A08;
extern int D_00205A14;
extern unsigned char D_001FD5E9;
extern void func_0CB458(int a);
extern void func_023390(char *a, int b);
extern void func_0BD8E0(void);
extern void func_0BD820(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0BCB00(void);
extern void func_1A7C10(int a, int b);
extern void func_131B48(void);

void func_0BCB60(void)
{
    char *s0;
    int *gp;

    s0 = D_00331E30;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0CB458(0x14);
    }
    func_023390(D_0023E540, D_00205A08);
    func_0BD8E0();
    func_0BD820();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_00205A14;
    *gp = 0;
    func_0BCB00();
    *(int *)(s0 + 4) = 0;
    if (D_001FD5E9 != 0) {
        func_1A7C10(1, 1);
    }
    func_131B48();
    *(int *)(s0 + 0x58) = 0;
}
