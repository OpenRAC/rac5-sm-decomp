/* LEVEL_03:0x1960C8 -- looks up the id kept in one global and stores the result in the next global. */
extern unsigned int D_002214E8;
extern int D_002214EC;
extern int func_1282D0(unsigned int value);

void func_1960C8(void)
{
    D_002214EC = func_1282D0(D_002214E8);
}
