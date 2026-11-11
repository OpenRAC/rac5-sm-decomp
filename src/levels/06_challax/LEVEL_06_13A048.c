/* LEVEL_06:0x13A048 -- placement copy of LEVEL_01_143950.c: looks up the handles of two fixed keys and keeps them in globals. */
extern int D_001F5DD4;
extern int D_001F5DD8;
extern int func_1206C0(unsigned int value);

void func_13A048(void)
{
    D_001F5DD4 = func_1206C0(0x4172c8a9u);
    D_001F5DD8 = func_1206C0(0x58482e4eu);
}
