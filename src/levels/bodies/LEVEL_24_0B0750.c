/* LEVEL_24:0x0B0750 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0B0090(int value);
extern void func_0B0138(int value);
extern void func_0B01A0(int value);
extern void func_0B29D0(int value);

void func_0B0750(void)
{
    int i = 0;
    do {
        func_0B0090(i);
        func_0B0138(i);
        func_0B01A0(i);
        func_0B29D0(i);
        i++;
    } while (i == 0);
}
