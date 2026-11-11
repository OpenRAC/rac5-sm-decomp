extern char D_003A74A8[];
extern void func_1544B8(void);
extern void func_02E868(void *);
void func_157ED0(void)
{
    D_003A74A8[0x478] = 0;
    D_003A74A8[0x494] = 0;
    func_1544B8();
    func_02E868(D_003A74A8 + 0x244);
}