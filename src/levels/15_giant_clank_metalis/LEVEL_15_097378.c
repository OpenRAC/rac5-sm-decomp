/* LEVEL_15:0x097378 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_097830(int, int);
extern void func_097658(int, int);
extern void func_0974F8(int, int);

void func_097378(void)
{
    unsigned int i = 0;
    do {
        func_097830(i, 0x5a);
        func_097658(i, 0x5a);
        func_0974F8(i, 0x5a);
        i++;
    } while (i == 0);
}
