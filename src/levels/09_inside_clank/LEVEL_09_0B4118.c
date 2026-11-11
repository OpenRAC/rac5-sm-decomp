/* LEVEL_09:0x0B4118 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0B4520(int, int);
extern void func_0B43F8(int, int);
extern void func_0B4298(int, int);

void func_0B4118(void)
{
    unsigned int i = 0;
    do {
        func_0B4520(i, 0x5a);
        func_0B43F8(i, 0x5a);
        func_0B4298(i, 0x5a);
        i++;
    } while (i == 0);
}
