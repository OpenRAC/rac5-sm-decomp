/* LEVEL_04:0x1500A0 -- placement copy of LEVEL_01_143950.c: looks up the handles of two fixed keys and keeps them in globals. */
extern int D_00220914;
extern int D_00220918;
extern int func_1364E8(unsigned int value);

void func_1500A0(void)
{
    D_00220914 = func_1364E8(0x4172c8a9u);
    D_00220918 = func_1364E8(0x58482e4eu);
}
