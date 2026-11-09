/* LEVEL_23:0x168120 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_1680B0(void);

void func_168120(void)
{
    int index;
    func_1680B0();
    for (index = 0; index != 6; index++)
        ;
}
