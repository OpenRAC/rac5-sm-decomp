/* LEVEL_18:0x08EC28 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_00256860;

int func_08EC28(int bit)
{
    return (D_00256860 >> bit) & 1;
}
