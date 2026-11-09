/* LEVEL_06:0x168478 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_168410(void);

void func_168478(void)
{
    int index;
    func_168410();
    for (index = 0; index != 6; index++)
        ;
}
