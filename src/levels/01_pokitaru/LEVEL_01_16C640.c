/* LEVEL_01:0x16C640 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16C608(int a0, int a1);

void func_16C640(void)
{
    func_16C608(1, 0xFFFF);
}
