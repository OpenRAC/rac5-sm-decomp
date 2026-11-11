/* LEVEL_15:0x070AE8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_070AB0(int a0, int a1);

void func_070AE8(void)
{
    func_070AB0(1, 0xFFFF);
}
