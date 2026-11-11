extern char D_003A90B8[];
extern void func_157A08(void);
extern void func_02ECF0(void *);
void func_15B420(void)
{
    D_003A90B8[0x478] = 0;
    D_003A90B8[0x494] = 0;
    func_157A08();
    func_02ECF0(D_003A90B8 + 0x244);
}