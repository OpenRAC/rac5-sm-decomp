/* LEVEL_07:0x1854E0 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_185478(void);

void func_1854E0(void)
{
    int index;
    func_185478();
    for (index = 0; index != 6; index++)
        ;
}
