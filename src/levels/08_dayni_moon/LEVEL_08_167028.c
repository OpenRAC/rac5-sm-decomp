extern char D_003E0EA8[];
extern void func_163610(void);
extern void func_02ECA8(void *);
void func_167028(void)
{
    D_003E0EA8[0x478] = 0;
    D_003E0EA8[0x494] = 0;
    func_163610();
    func_02ECA8(D_003E0EA8 + 0x244);
}