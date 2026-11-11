/* LEVEL_02:0x0BD7D0 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0BD110(int value);
extern void func_0BD1B8(int value);
extern void func_0BD220(int value);
extern void func_0BFA50(int value);

void func_0BD7D0(void)
{
    int i = 0;
    do {
        func_0BD110(i);
        func_0BD1B8(i);
        func_0BD220(i);
        func_0BFA50(i);
        i++;
    } while (i == 0);
}
