/* LEVEL_02:0x0C2128 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_0033FF30[];
extern char D_0024C650[];
extern int D_002119C8;
extern int D_002119D4;
extern unsigned char D_002095A9;
extern void func_0D0928(int a);
extern void func_0244F0(char *a, int b);
extern void func_0C2EA0(void);
extern void func_0C2DE0(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0C20C8(void);
extern void func_1B84D0(int a, int b);
extern void func_13A078(void);

void func_0C2128(void)
{
    char *s0;
    int *gp;

    s0 = D_0033FF30;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0D0928(0x14);
    }
    func_0244F0(D_0024C650, D_002119C8);
    func_0C2EA0();
    func_0C2DE0();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_002119D4;
    *gp = 0;
    func_0C20C8();
    *(int *)(s0 + 4) = 0;
    if (D_002095A9 != 0) {
        func_1B84D0(1, 1);
    }
    func_13A078();
    *(int *)(s0 + 0x58) = 0;
}
