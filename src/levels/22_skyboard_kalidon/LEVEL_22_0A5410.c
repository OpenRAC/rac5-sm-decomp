/* LEVEL_22:0x0A5410 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0A4D50(int value);
extern void func_0A4DF8(int value);
extern void func_0A4E60(int value);
extern void func_0A75E8(int value);

void func_0A5410(void)
{
    int i = 0;
    do {
        func_0A4D50(i);
        func_0A4DF8(i);
        func_0A4E60(i);
        func_0A75E8(i);
        i++;
    } while (i == 0);
}
