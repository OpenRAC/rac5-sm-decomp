/* LEVEL_01:0x0B6EC0 -- calls four helpers with a counter that starts at zero. */
extern void func_0B6800(int value);
extern void func_0B68A8(int value);
extern void func_0B6910(int value);
extern void func_0B9140(int value);

void func_0B6EC0(void)
{
    int i = 0;
    do {
        func_0B6800(i);
        func_0B68A8(i);
        func_0B6910(i);
        func_0B9140(i);
        i++;
    } while (i == 0);
}
