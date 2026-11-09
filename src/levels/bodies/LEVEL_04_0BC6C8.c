/* LEVEL_04:0x0BC6C8 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0BC008(int value);
extern void func_0BC0B0(int value);
extern void func_0BC118(int value);
extern void func_0BE920(int value);

void func_0BC6C8(void)
{
    int i = 0;
    do {
        func_0BC008(i);
        func_0BC0B0(i);
        func_0BC118(i);
        func_0BE920(i);
        i++;
    } while (i == 0);
}
