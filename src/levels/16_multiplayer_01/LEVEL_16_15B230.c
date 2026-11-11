/* LEVEL_16:0x15B230 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15B1F8(int a0, int a1);

void func_15B230(void)
{
    func_15B1F8(1, 0xFFFF);
}
