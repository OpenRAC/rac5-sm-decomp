/* LEVEL_23:0x085A48 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_085A10(int a0, int a1);

void func_085A48(void)
{
    func_085A10(1, 0xFFFF);
}
