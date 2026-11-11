extern char D_0039AF98[];
extern void func_14FC98(void);
extern void func_02E3B8(void *);
void func_1536B0(void)
{
    D_0039AF98[0x478] = 0;
    D_0039AF98[0x494] = 0;
    func_14FC98();
    func_02E3B8(D_0039AF98 + 0x244);
}