/* LEVEL_06:0x0B1790 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0B10D0(int value);
extern void func_0B1178(int value);
extern void func_0B11E0(int value);
extern void func_0B3A40(int value);

void func_0B1790(void)
{
    int i = 0;
    do {
        func_0B10D0(i);
        func_0B1178(i);
        func_0B11E0(i);
        func_0B3A40(i);
        i++;
    } while (i == 0);
}
