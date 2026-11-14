/* LEVEL_19:0x08F4A8 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_00256660;

int func_08F4A8(int bit)
{
    return (D_00256660 >> bit) & 1;
}
