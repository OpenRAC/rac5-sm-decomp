/* LEVEL_23:0x0ADC88 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0AD5C8(int value);
extern void func_0AD670(int value);
extern void func_0AD6D8(int value);
extern void func_0AFED8(int value);

void func_0ADC88(void)
{
    int i = 0;
    do {
        func_0AD5C8(i);
        func_0AD670(i);
        func_0AD6D8(i);
        func_0AFED8(i);
        i++;
    } while (i == 0);
}
