/* LEVEL_09:0x030868 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_030650(int a0, int a1);

void func_030868(void)
{
    func_030650(1, 0xFFFF);
}
