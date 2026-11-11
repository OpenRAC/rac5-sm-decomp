/* LEVEL_24:0x0B06F8 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0B0B00(int, int);
extern void func_0B09D8(int, int);
extern void func_0B0878(int, int);

void func_0B06F8(void)
{
    unsigned int i = 0;
    do {
        func_0B0B00(i, 0x5a);
        func_0B09D8(i, 0x5a);
        func_0B0878(i, 0x5a);
        i++;
    } while (i == 0);
}
