/* LEVEL_10:0x17AAA8 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_17AA40(void);

void func_17AAA8(void)
{
    int index;
    func_17AA40();
    for (index = 0; index != 6; index++)
        ;
}
