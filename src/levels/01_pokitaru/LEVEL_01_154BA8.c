extern char D_00391B98[];
extern void func_151190(void);
extern void func_02E530(void *);
void func_154BA8(void)
{
    D_00391B98[0x478] = 0;
    D_00391B98[0x494] = 0;
    func_151190();
    func_02E530(D_00391B98 + 0x244);
}