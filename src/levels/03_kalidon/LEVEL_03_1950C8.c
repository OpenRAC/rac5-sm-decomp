/* LEVEL_03:0x1950C8 -- looks up the handles of two fixed keys and keeps them in globals. */
extern int D_00221448;
extern int D_0022144C;
extern int func_1282D0(unsigned int value);

void func_1950C8(void)
{
    D_00221448 = func_1282D0(0xEE6CCB94u);
    D_0022144C = func_1282D0(0xBEEFE173u);
}
