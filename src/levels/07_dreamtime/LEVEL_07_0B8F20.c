/* LEVEL_07:0x0B8F20 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0B8860(int value);
extern void func_0B8908(int value);
extern void func_0B8970(int value);
extern void func_0BB1A0(int value);

void func_0B8F20(void)
{
    int i = 0;
    do {
        func_0B8860(i);
        func_0B8908(i);
        func_0B8970(i);
        func_0BB1A0(i);
        i++;
    } while (i == 0);
}
