/* LEVEL_05:0x0B5468 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0B4DA8(int value);
extern void func_0B4E50(int value);
extern void func_0B4EB8(int value);
extern void func_0B76E8(int value);

void func_0B5468(void)
{
    int i = 0;
    do {
        func_0B4DA8(i);
        func_0B4E50(i);
        func_0B4EB8(i);
        func_0B76E8(i);
        i++;
    } while (i == 0);
}
