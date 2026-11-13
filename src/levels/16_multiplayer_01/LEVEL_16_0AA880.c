extern char D_276970[], D_1E4090[];
extern int D_1AAA88, D_1AAA94;
extern void func_0B93E0(unsigned char value);
extern void func_021540(char *object, int value);
extern void func_0AB998(void), func_0AB8D8(void), func_0AA820(void);
extern int func_110A38(void);
extern void SND_PausePositionalSounds__Fb(int paused);
extern int SND_PauseAtrac__Fbi(int paused, int channel);
void func_0AA880(void)
{
    char *state = D_276970;
    if (*(int *)(state + 0x10) != 1)
        func_0B93E0(20);
    func_021540(D_1E4090, D_1AAA88);
    func_0AB998();
    func_0AB8D8();
    SND_PausePositionalSounds__Fb(0);
    SND_PauseAtrac__Fbi(0, -1);
    D_1AAA94 = 0;
    func_0AA820();
    *(int *)(state + 4) = 0;
    func_110A38();
    *(int *)(state + 0x58) = 0;
}
