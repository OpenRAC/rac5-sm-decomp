/* LEVEL_09:0x13C930 -- placement copy of LEVEL_01_143950.c: looks up the handles of two fixed keys and keeps them in globals. */
extern int D_001F0CD4;
extern int D_001F0CD8;
extern int func_123000(unsigned int value);

void func_13C930(void)
{
    D_001F0CD4 = func_123000(0x4172c8a9u);
    D_001F0CD8 = func_123000(0x58482e4eu);
}
