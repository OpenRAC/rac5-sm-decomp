/* LEVEL_02:0x1931C8 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_193158(void);

void func_1931C8(void)
{
    int index;
    func_193158();
    for (index = 0; index != 6; index++)
        ;
}
