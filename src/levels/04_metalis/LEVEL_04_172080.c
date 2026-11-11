/* LEVEL_04:0x172080 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_172048(int a0, int a1);

void func_172080(void)
{
    func_172048(1, 0xFFFF);
}
