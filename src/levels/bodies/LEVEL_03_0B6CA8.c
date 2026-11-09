/* LEVEL_03:0x0B6CA8 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0B65E8(int value);
extern void func_0B6690(int value);
extern void func_0B66F8(int value);
extern void func_0B8F28(int value);

void func_0B6CA8(void)
{
    int i = 0;
    do {
        func_0B65E8(i);
        func_0B6690(i);
        func_0B66F8(i);
        func_0B8F28(i);
        i++;
    } while (i == 0);
}
