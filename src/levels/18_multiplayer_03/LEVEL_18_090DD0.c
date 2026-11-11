/* LEVEL_18:0x090DD0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_090D98(int a0, int a1);

void func_090DD0(void)
{
    func_090D98(1, 0xFFFF);
}
