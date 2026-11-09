/* LEVEL_10:0x0B80E8 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0B8570(int, int);
extern void func_0B83C8(int, int);
extern void func_0B8268(int, int);

void func_0B80E8(void)
{
    unsigned int i = 0;
    do {
        func_0B8570(i, 0x5a);
        func_0B83C8(i, 0x5a);
        func_0B8268(i, 0x5a);
        i++;
    } while (i == 0);
}
