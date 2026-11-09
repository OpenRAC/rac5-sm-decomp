/* LEVEL_04:0x1887D8 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_188768(void);

void func_1887D8(void)
{
    int index;
    func_188768();
    for (index = 0; index != 6; index++)
        ;
}
