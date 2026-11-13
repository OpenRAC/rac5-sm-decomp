/* LEVEL_17:0x0A9DC0 -- placement copy of LEVEL_16_0AA880.c. */
extern char D_267C70[], D_1D5390[];
extern int D_19E088, D_19E094;
extern void func_0B8920(unsigned char value);
extern void func_020EC0(char *object, int value);
extern void func_0AAED8(void), func_0AAE18(void), func_0A9D60(void);
extern int func_10FFB0(void);
extern void SND_PausePositionalSounds__Fb(int paused);
extern int SND_PauseAtrac__Fbi(int paused, int channel);
void func_0A9DC0(void)
{
    char *state = D_267C70;
    if (*(int *)(state + 0x10) != 1)
        func_0B8920(20);
    func_020EC0(D_1D5390, D_19E088);
    func_0AAED8();
    func_0AAE18();
    SND_PausePositionalSounds__Fb(0);
    SND_PauseAtrac__Fbi(0, -1);
    D_19E094 = 0;
    func_0A9D60();
    *(int *)(state + 4) = 0;
    func_10FFB0();
    *(int *)(state + 0x58) = 0;
}
