/* LEVEL_22:0x0A53B8 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0A57C0(int, int);
extern void func_0A5698(int, int);
extern void func_0A5538(int, int);

void func_0A53B8(void)
{
    unsigned int i = 0;
    do {
        func_0A57C0(i, 0x5a);
        func_0A5698(i, 0x5a);
        func_0A5538(i, 0x5a);
        i++;
    } while (i == 0);
}
