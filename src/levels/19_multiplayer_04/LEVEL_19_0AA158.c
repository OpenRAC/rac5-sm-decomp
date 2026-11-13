/* LEVEL_19:0x0AA158 -- placement copy of LEVEL_16_0AA880.c. */
extern char D_276AF0[], D_1E4210[];
extern int D_1ABC08, D_1ABC14;
extern void func_0B8CB8(unsigned char value);
extern void func_021180(char *object, int value);
extern void func_0AB270(void), func_0AB1B0(void), func_0AA0F8(void);
extern int func_1110D8(void);
extern void SND_PausePositionalSounds__Fb(int paused);
extern int SND_PauseAtrac__Fbi(int paused, int channel);
void func_0AA158(void)
{
    char *state = D_276AF0;
    if (*(int *)(state + 0x10) != 1)
        func_0B8CB8(20);
    func_021180(D_1E4210, D_1ABC08);
    func_0AB270();
    func_0AB1B0();
    SND_PausePositionalSounds__Fb(0);
    SND_PauseAtrac__Fbi(0, -1);
    D_1ABC14 = 0;
    func_0AA0F8();
    *(int *)(state + 4) = 0;
    func_1110D8();
    *(int *)(state + 0x58) = 0;
}
