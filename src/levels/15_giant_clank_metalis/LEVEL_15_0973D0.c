/* LEVEL_15:0x0973D0 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_096D10(int value);
extern void func_096DB8(int value);
extern void func_096E20(int value);
extern void func_099788(int value);

void func_0973D0(void)
{
    int i = 0;
    do {
        func_096D10(i);
        func_096DB8(i);
        func_096E20(i);
        func_099788(i);
        i++;
    } while (i == 0);
}
