/* LEVEL_10:0x15B678 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15B640(int a0, int a1);

void func_15B678(void)
{
    func_15B640(1, 0xFFFF);
}
