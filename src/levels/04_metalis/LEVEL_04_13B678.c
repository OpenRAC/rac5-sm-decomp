/* LEVEL_04:0x13B678 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_13B640(int a0, int a1);

void func_13B678(void)
{
    func_13B640(1, 0xFFFF);
}
