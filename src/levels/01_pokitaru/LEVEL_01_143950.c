/* LEVEL_01:0x143950 -- looks up the handles of two fixed keys and keeps them in globals. */
extern int D_002071D4;
extern int D_002071D8;
extern int func_12A068(unsigned int value);

void func_143950(void)
{
    D_002071D4 = func_12A068(0x4172c8a9u);
    D_002071D8 = func_12A068(0x58482e4eu);
}
