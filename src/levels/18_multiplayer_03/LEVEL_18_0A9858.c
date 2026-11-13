/* LEVEL_18:0x0A9858 -- placement copy of LEVEL_16_0AA880.c. */
extern char D_276CF0[], D_1E4410[];
extern int D_1ABF08, D_1ABF14;
extern void func_0B83B8(unsigned char value);
extern void func_020B88(char *object, int value);
extern void func_0AA970(void), func_0AA8B0(void), func_0A97F8(void);
extern int func_10F6E8(void);
extern void SND_PausePositionalSounds__Fb(int paused);
extern int SND_PauseAtrac__Fbi(int paused, int channel);
void func_0A9858(void)
{
    char *state = D_276CF0;
    if (*(int *)(state + 0x10) != 1)
        func_0B83B8(20);
    func_020B88(D_1E4410, D_1ABF08);
    func_0AA970();
    func_0AA8B0();
    SND_PausePositionalSounds__Fb(0);
    SND_PauseAtrac__Fbi(0, -1);
    D_1ABF14 = 0;
    func_0A97F8();
    *(int *)(state + 4) = 0;
    func_10F6E8();
    *(int *)(state + 0x58) = 0;
}
