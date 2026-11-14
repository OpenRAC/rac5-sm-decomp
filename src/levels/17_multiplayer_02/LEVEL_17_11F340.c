/* LEVEL_17:0x11F340 -- placement copy of LEVEL_16_11F918.c: empty handler followed by a setter storing a value and the constant 2 in two globals. */
extern int D_002D3100;
extern int D_002D3104;

void func_11F340(void)
{
}

void func_11F348(int value)
{
    D_002D3100 = value;
    D_002D3104 = 2;
}
