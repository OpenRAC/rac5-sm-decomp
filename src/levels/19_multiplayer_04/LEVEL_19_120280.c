/* LEVEL_19:0x120280 -- placement copy of LEVEL_16_11F918.c: empty handler followed by a setter storing a value and the constant 2 in two globals. */
extern int D_002E1F80;
extern int D_002E1F84;

void func_120280(void)
{
}

void func_120288(int value)
{
    D_002E1F80 = value;
    D_002E1F84 = 2;
}
