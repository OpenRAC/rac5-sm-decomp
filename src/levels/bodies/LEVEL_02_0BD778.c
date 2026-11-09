/* LEVEL_02:0x0BD778 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0BDB80(int, int);
extern void func_0BDA58(int, int);
extern void func_0BD8F8(int, int);

void func_0BD778(void)
{
    unsigned int i = 0;
    do {
        func_0BDB80(i, 0x5a);
        func_0BDA58(i, 0x5a);
        func_0BD8F8(i, 0x5a);
        i++;
    } while (i == 0);
}
