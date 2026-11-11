/* LEVEL_16:0x128640 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_128608(int a0, int a1);

void func_128640(void)
{
    func_128608(1, 0xFFFF);
}
