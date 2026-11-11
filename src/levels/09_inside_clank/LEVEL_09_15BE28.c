/* LEVEL_09:0x15BE28 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15BDF0(int a0, int a1);

void func_15BE28(void)
{
    func_15BDF0(1, 0xFFFF);
}
