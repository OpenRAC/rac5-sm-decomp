/* LEVEL_03:0x0B6C50 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0B7058(int, int);
extern void func_0B6F30(int, int);
extern void func_0B6DD0(int, int);

void func_0B6C50(void)
{
    unsigned int i = 0;
    do {
        func_0B7058(i, 0x5a);
        func_0B6F30(i, 0x5a);
        func_0B6DD0(i, 0x5a);
        i++;
    } while (i == 0);
}
