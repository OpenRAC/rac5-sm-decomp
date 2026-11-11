/* LEVEL_24:0x162268 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_1621F8(void);

void func_162268(void)
{
    int index;
    func_1621F8();
    for (index = 0; index != 6; index++)
        ;
}
