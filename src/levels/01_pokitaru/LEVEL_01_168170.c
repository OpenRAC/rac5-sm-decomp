/* LEVEL_01:0x168170 -- looks up the handles of two fixed keys and keeps them in globals. */
extern int D_0020764C;
extern int D_00207650;
extern int func_12A068(unsigned int value);

void func_168170(void)
{
    D_0020764C = func_12A068(0x764b209au);
    D_00207650 = func_12A068(0x15ada566u);
}
