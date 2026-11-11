/* LEVEL_03:0x17D948 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_17D8D8(void);

void func_17D948(void)
{
    int index;
    func_17D8D8();
    for (index = 0; index != 6; index++)
        ;
}
