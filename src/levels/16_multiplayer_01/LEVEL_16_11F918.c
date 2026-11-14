/* LEVEL_16:0x11F918 -- empty handler followed by a setter storing a value and the constant 2 in two globals. */
extern int D_002E1E00;
extern int D_002E1E04;

void func_11F918(void)
{
}

void func_11F920(int value)
{
    D_002E1E00 = value;
    D_002E1E04 = 2;
}
