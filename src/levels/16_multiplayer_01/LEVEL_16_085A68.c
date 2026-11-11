/* LEVEL_16:0x085A68 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_085A30(int a0, int a1);

void func_085A68(void)
{
    func_085A30(1, 0xFFFF);
}
