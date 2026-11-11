/* LEVEL_05:0x13F340 -- placement copy of LEVEL_01_143950.c: looks up the handles of two fixed keys and keeps them in globals. */
extern int D_001F6254;
extern int D_001F6258;
extern int func_1259E0(unsigned int value);

void func_13F340(void)
{
    D_001F6254 = func_1259E0(0x4172c8a9u);
    D_001F6258 = func_1259E0(0x58482e4eu);
}
