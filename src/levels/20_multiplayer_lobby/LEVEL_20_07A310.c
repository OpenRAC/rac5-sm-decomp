/* LEVEL_20:0x07A310 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_00179D20;

int func_07A310(int bit)
{
    return (D_00179D20 >> bit) & 1;
}
