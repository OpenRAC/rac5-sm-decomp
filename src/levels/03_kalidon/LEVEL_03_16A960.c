/* LEVEL_03:0x16A960 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16A578(int a0, int a1);

void func_16A960(void)
{
    func_16A578(1, 0xFFFF);
}
