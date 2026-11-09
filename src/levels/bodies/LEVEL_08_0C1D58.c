/* LEVEL_08:0x0C1D58 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0C2160(int, int);
extern void func_0C2038(int, int);
extern void func_0C1ED8(int, int);

void func_0C1D58(void)
{
    unsigned int i = 0;
    do {
        func_0C2160(i, 0x5a);
        func_0C2038(i, 0x5a);
        func_0C1ED8(i, 0x5a);
        i++;
    } while (i == 0);
}
