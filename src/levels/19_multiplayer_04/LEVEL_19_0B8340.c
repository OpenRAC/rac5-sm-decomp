extern long long func_110550(void);
extern void func_110568(int);
extern void func_0B34E8(void);
extern void func_110958(int);
extern unsigned char D_001A2B59;
extern char *D_001A2C34;

void func_0B8340(void)
{
    int value = ((int (*)(void))func_110550)();
    func_110568(0);
    if (D_001A2B59 != 0) {
        func_0B34E8();
    }
    func_110568(value);
    func_110958(*(int *)(D_001A2C34 + 0x3c));
}
