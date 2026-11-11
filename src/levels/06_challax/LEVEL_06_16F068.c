/* LEVEL_06:0x16F068 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16EE48(int a0, int a1);

void func_16F068(void)
{
    func_16EE48(1, 0xFFFF);
}
