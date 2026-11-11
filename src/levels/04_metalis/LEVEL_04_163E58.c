/* LEVEL_04:0x163E58 -- placement copy of LEVEL_02_161CA0.c: stores the ids looked up for two fixed hashes into two globals. */
extern int D_00220B5C;
extern int D_00220B60;
extern int func_1364E8(unsigned int value);

void func_163E58(void)
{
    D_00220B5C = func_1364E8(0x99C473CAu);
    D_00220B60 = func_1364E8(0x89436D18u);
}
