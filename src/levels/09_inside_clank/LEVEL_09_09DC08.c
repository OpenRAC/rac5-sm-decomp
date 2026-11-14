/* LEVEL_09:0x09DC08 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_00286110;

int func_09DC08(int bit)
{
    return (D_00286110 >> bit) & 1;
}
