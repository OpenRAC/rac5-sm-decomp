/* LEVEL_16:0x18C800 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_18C7C8(int a0, int a1);

void func_18C800(void)
{
    func_18C7C8(1, 0xFFFF);
}
