/* LEVEL_20:0x094DB0 -- placement copy of LEVEL_16_0AA880.c. */
extern char D_19A1B0[], D_13BA10[];
extern int D_10D168, D_10D174;
extern void func_0A3910(unsigned char value);
extern void func_01E360(char *object, int value);
extern void func_095EC8(void), func_095E08(void), func_094D50(void);
extern int func_0E3820(void);
extern void SND_PausePositionalSounds__Fb(int paused);
extern int SND_PauseAtrac__Fbi(int paused, int channel);
void func_094DB0(void)
{
    char *state = D_19A1B0;
    if (*(int *)(state + 0x10) != 1)
        func_0A3910(20);
    func_01E360(D_13BA10, D_10D168);
    func_095EC8();
    func_095E08();
    SND_PausePositionalSounds__Fb(0);
    SND_PauseAtrac__Fbi(0, -1);
    D_10D174 = 0;
    func_094D50();
    *(int *)(state + 4) = 0;
    func_0E3820();
    *(int *)(state + 0x58) = 0;
}
