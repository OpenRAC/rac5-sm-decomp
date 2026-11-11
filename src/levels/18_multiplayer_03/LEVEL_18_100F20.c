/* LEVEL_18:0x100F20 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_100EE8(int a0, int a1);

void func_100F20(void)
{
    func_100EE8(1, 0xFFFF);
}
