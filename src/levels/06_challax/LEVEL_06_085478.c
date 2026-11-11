/* LEVEL_06:0x085478 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_085440(int a0, int a1);

void func_085478(void)
{
    func_085440(1, 0xFFFF);
}
