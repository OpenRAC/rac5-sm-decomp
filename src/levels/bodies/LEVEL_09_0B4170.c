/* LEVEL_09:0x0B4170 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0B3AB0(int value);
extern void func_0B3B58(int value);
extern void func_0B3BC0(int value);
extern void func_0B63F0(int value);

void func_0B4170(void)
{
    int i = 0;
    do {
        func_0B3AB0(i);
        func_0B3B58(i);
        func_0B3BC0(i);
        func_0B63F0(i);
        i++;
    } while (i == 0);
}
