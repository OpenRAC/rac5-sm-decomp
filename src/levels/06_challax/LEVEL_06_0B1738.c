/* LEVEL_06:0x0B1738 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0B1B40(int, int);
extern void func_0B1A18(int, int);
extern void func_0B18B8(int, int);

void func_0B1738(void)
{
    unsigned int i = 0;
    do {
        func_0B1B40(i, 0x5a);
        func_0B1A18(i, 0x5a);
        func_0B18B8(i, 0x5a);
        i++;
    } while (i == 0);
}
