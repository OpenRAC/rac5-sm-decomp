/* LEVEL_05:0x0B5410 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0B5818(int, int);
extern void func_0B56F0(int, int);
extern void func_0B5590(int, int);

void func_0B5410(void)
{
    unsigned int i = 0;
    do {
        func_0B5818(i, 0x5a);
        func_0B56F0(i, 0x5a);
        func_0B5590(i, 0x5a);
        i++;
    } while (i == 0);
}
