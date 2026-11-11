/* LEVEL_18:0x155BD8 -- caches two keyed lookups in globals. */
extern int D_001BF0CC;
extern int D_001BF0C8;
extern int func_105B48(unsigned int value);

void func_155BD8(void)
{
    D_001BF0CC = func_105B48(0xDB749548u);
    D_001BF0C8 = func_105B48(0xDF814575u);
}
