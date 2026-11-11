/* LEVEL_04:0x0BC670 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0BCA78(int, int);
extern void func_0BC950(int, int);
extern void func_0BC7F0(int, int);

void func_0BC670(void)
{
    unsigned int i = 0;
    do {
        func_0BCA78(i, 0x5a);
        func_0BC950(i, 0x5a);
        func_0BC7F0(i, 0x5a);
        i++;
    } while (i == 0);
}
