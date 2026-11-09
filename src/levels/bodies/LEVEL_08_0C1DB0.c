/* LEVEL_08:0x0C1DB0 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0C16F0(int value);
extern void func_0C1798(int value);
extern void func_0C1800(int value);
extern void func_0C4030(int value);

void func_0C1DB0(void)
{
    int i = 0;
    do {
        func_0C16F0(i);
        func_0C1798(i);
        func_0C1800(i);
        func_0C4030(i);
        i++;
    } while (i == 0);
}
