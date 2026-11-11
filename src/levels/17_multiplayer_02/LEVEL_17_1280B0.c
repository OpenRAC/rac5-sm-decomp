/* LEVEL_17:0x1280B0 -- placement copy of LEVEL_01_143950.c: looks up the handles of two fixed keys and keeps them in globals. */
extern int D_001B0B24;
extern int D_001B0B28;
extern int func_106410(unsigned int value);

void func_1280B0(void)
{
    D_001B0B24 = func_106410(0x4172c8a9u);
    D_001B0B28 = func_106410(0x58482e4eu);
}
