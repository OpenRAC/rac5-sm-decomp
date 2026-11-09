/* LEVEL_23:0x0ADC30 -- placement copy of LEVEL_01_0B6E68.c: issues three calls with the same index and argument, once. */
extern void func_0AE038(int, int);
extern void func_0ADF10(int, int);
extern void func_0ADDB0(int, int);

void func_0ADC30(void)
{
    unsigned int i = 0;
    do {
        func_0AE038(i, 0x5a);
        func_0ADF10(i, 0x5a);
        func_0ADDB0(i, 0x5a);
        i++;
    } while (i == 0);
}
