/* LEVEL_01:0x0A0950 -- tests one bit of the global mask word. */
extern unsigned int D_0029E990;

int func_0A0950(int bit)
{
    return (D_0029E990 >> bit) & 1;
}
