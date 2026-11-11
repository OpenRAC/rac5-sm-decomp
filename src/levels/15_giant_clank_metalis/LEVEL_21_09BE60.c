/* LEVEL_21:0x09BE60 -- placement copy of LEVEL_01_0BB818.c: resets the audio and game-state object, pausing sound channels and clearing counters. */
extern char D_00240270[];
extern char D_0017D2C0[];
extern int D_00151688;
extern int D_00151694;
extern unsigned char D_00149269;
extern void func_0AA660(int a);
extern void func_01E018(char *a, int b);
extern void func_09CBD8(void);
extern void func_09CB18(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_09BE00(void);
extern void func_0F4EA0(int a, int b);
extern void func_0F2B90(void);

void func_09BE60(void)
{
    char *s0;
    int *gp;

    s0 = D_00240270;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0AA660(0x14);
    }
    func_01E018(D_0017D2C0, D_00151688);
    func_09CBD8();
    func_09CB18();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_00151694;
    *gp = 0;
    func_09BE00();
    *(int *)(s0 + 4) = 0;
    if (D_00149269 != 0) {
        func_0F4EA0(1, 1);
    }
    func_0F2B90();
    *(int *)(s0 + 0x58) = 0;
}
