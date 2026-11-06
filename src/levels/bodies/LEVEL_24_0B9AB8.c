extern unsigned char D_001CE7E4;
extern char *D_001C4C2C;
extern unsigned char D_001D73C9;
extern void func_128DA0(int);
extern void func_025608(void);

void func_0B9AB8(void)
{
    if (D_001CE7E4 != 0)
        func_128DA0(*(int *)(D_001C4C2C + 0x1c6c));
    func_025608();
    D_001D73C9 = 0;
}
