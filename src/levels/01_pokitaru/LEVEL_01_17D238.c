/* LEVEL_01:0x17D238 -- calls a helper, then spins a short counted delay loop. */
extern void func_17D1C8(void);

void func_17D238(void)
{
    int index;
    func_17D1C8();
    for (index = 0; index != 6; index++)
        ;
}
