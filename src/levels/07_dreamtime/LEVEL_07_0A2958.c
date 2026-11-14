/* LEVEL_07:0x0A2958 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002B4290;

int func_0A2958(int bit)
{
    return (D_002B4290 >> bit) & 1;
}
