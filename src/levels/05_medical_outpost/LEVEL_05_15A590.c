/* LEVEL_05:0x15A590 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15A558(int a0, int a1);

void func_15A590(void)
{
    func_15A558(1, 0xFFFF);
}
