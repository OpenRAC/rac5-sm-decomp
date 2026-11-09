/* LEVEL_07:0x0B8EC8 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0B92D0(int, int);
extern void func_0B91A8(int, int);
extern void func_0B9048(int, int);

void func_0B8EC8(void)
{
    unsigned int i = 0;
    do {
        func_0B92D0(i, 0x5a);
        func_0B91A8(i, 0x5a);
        func_0B9048(i, 0x5a);
        i++;
    } while (i == 0);
}
