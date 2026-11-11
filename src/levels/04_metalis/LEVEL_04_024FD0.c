/* LEVEL_04:0x024FD0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_024F98(int a0, int a1);

void func_024FD0(void)
{
    func_024F98(1, 0xFFFF);
}
